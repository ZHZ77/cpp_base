# 注释行
#[[
    块注释
]]


# 指定动态库
cmake_minimum_required(VERSION 3.20)
project(test)


# 包含头文件
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# 指定路径
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib1)
link_libraries(calc)        # 链接库的名字
# 制作动态库
add_executable(app ${SRC})







