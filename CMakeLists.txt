# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(MessageNotifier)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 查找所有源文件
file(GLOB SOURCES "src/*.cpp")

# 可执行文件的名称和源文件路径
add_executable(MessageNotifier ${SOURCES})

# 包含头文件目录
target_include_directories(MessageNotifier PUBLIC "${PROJECT_SOURCE_DIR}/src")

