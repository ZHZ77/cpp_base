cmake_minimum_required(VERSION 3.20)

project(cppjc)


file(
    GLOB _SRCS
    main.cpp
)

add_executable(cppjc ${_SRCS})

