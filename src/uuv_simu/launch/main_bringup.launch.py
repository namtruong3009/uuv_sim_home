import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    # 1. Lấy đường dẫn tới các package cần thiết
    ros_gz_sim_pkg = get_package_share_directory('ros_gz_sim')
    dave_robot_pkg = get_package_share_directory('dave_robot_models')
    
    # [Tùy chọn] Đường dẫn tới package world nếu bạn dùng world riêng
    dave_worlds_pkg = get_package_share_directory('dave_worlds')
    world_file = os.path.join(dave_worlds_pkg, 'worlds', 'dave_ocean_waves.world')  # Thay đổi tên file world nếu cần

    # 2. Khởi chạy phần mềm Gazebo Harmonic
    # Lưu ý: Hiện tại mình đang để 'empty.sdf' (môi trường trống). 
    # Nếu bạn đã có file world đại dương cụ thể, hãy thay 'empty.sdf' bằng đường dẫn world_file ở trên.
    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ros_gz_sim_pkg, 'launch', 'gz_sim.launch.py')
        ),
        # Cờ '-r' để tự động nhấn nút Play, '-v 4' để bật log báo lỗi chi tiết
        launch_arguments={'gz_args': f'-r -v 4 {world_file}'}.items()
    )

    # 3. Nạp (Spawn) mô hình tàu RexROV vào môi trường Gazebo
    # Đường dẫn này khớp chuẩn với cây thư mục bạn đã gửi ảnh
    rexrov_sdf_path = os.path.join(dave_robot_pkg, 'description', 'rexrov', 'model.sdf')

    spawn_robot = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-name', 'rexrov',
            '-file', rexrov_sdf_path,
            '-x', '0.0',
            '-y', '0.0',
            '-z', '-5.0',  # Thả tàu ở độ sâu âm 5 mét dưới mặt nước
        ],
        output='screen'
    )

    # 4. Trả về cấu hình để khởi chạy đồng thời
    return LaunchDescription([
        gz_sim,
        spawn_robot
    ])