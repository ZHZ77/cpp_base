# 注释行
#[[
    块注释
]]

cmake_minimum_required(VERSION 3.20)
project(app)



# set(SRC add.cpp div.cpp main.cpp mult.cpp sub.cpp)
set(output_path /mnt/d/Data/Code/learn_cpp/cmake/build)
set(EXECUTABLE_OUTPUT_PATH ${output_path})
set(CMAKE_CXX_STANDARD 11)



include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRR)
file(GLOB SRR ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_executable(app ${SRR})







