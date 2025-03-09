# 注释行
#[[
    块注释
]]


# 指定动态库
cmake_minimum_required(VERSION 3.20)
project(app)


# 包含头文件
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)


set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
# 制作动态库
add_library(calc SHARED ${SRC})







