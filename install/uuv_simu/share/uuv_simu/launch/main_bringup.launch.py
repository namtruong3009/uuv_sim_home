import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    ros_gz_sim_pkg = get_package_share_directory('ros_gz_sim')
    dave_robot_pkg = get_package_share_directory('dave_robot_models')
    dave_worlds_pkg = get_package_share_directory('dave_worlds')
    world_file = os.path.join(dave_worlds_pkg, 'worlds', 'dave_ocean_waves.world')
    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ros_gz_sim_pkg, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': f'-r -v 4 {world_file}'}.items()
    )
    rexrov_sdf_path = os.path.join(dave_robot_pkg, 'description', 'rexrov', 'model.sdf')

    spawn_robot = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-name', 'rexrov',  # Tên tàu chính thức trên Gazebo
            '-file', rexrov_sdf_path,
            '-x', '0.0',
            '-y', '0.0',
            '-z', '-5.0',
        ],
        output='screen'
    )
    bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=[
            "/sensor/multibeam_sonar/point_cloud@sensor_msgs/msg/PointCloud2[gz.msgs.PointCloudPacked",
            "/model/rexrov/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry",
        ],
        output="screen",
    )
    static_tf_sonar = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        arguments=['0.2', '0.0', '-0.13', '0.0', '0.0', '0.0', 'base_link', 'forward_sonar_optical_link'],
        output='screen'
    )
    bridge_node = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='rexrov_sensor_bridge',
        output='screen',
        arguments=[
            '/rexrov/camera/image_raw@sensor_msgs/msg/Image[gz.msgs.Image',
            '/sensor/multibeam_sonar/point_cloud@sensor_msgs/msg/PointCloud2[gz.msgs.PointCloudPacked',
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock'
        ]
    )

    return LaunchDescription([
        gz_sim,
        spawn_robot,
        bridge,
        static_tf_sonar,
        bridge_node
    ])