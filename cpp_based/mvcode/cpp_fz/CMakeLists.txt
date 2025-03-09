cmake_minimum_required(VERSION 3.20)


project(cpp_fz)

file(
    GLOB _SRCS
	main.cpp
	baseinterface.h
	LineDetectAlgo.h
	LineDetectAlgo.cpp
	CircleDetectAlgo.h
	CircleDetectAlgo.cpp
)


add_executable(cpp_fz ${_SRCS})
