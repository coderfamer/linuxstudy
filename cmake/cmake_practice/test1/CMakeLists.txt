# CMakeList.txt: test1 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源代码添加到此项目的可执行文件。
project(HELLO)

set(SRC_LIST main.cpp)
message(STATUS "This is BINARY dir" ${HELLO_BINARY_DIR})
message(STATUS "This is SOURCE dir" ${HELLO_SOURCE_DIR})



add_executable (hello SRC_LIST)

# TODO: 如有需要，请添加测试并安装目标。
