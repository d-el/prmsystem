cmake_minimum_required(VERSION 3.14)

project(prmsytem2json CXX)
set(CMAKE_CXX_STANDARD 17)

find_package(jsoncpp REQUIRED)
	
set(CMAKE_CXX_FLAGS "-g3 -Og")

add_executable(prmsytem2json
	gen.cpp
	)
