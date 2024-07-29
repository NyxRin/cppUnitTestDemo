cmake_minimum_required(VERSION 3.28)
project(demo)

set(CMAKE_CXX_STANDARD 17)

# 添加子目录
add_subdirectory(src)
add_subdirectory(test)

add_executable(demo main.cpp)




