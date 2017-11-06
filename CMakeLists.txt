cmake_minimum_required (VERSION 3.0)
project (Assign5)

if (CMAKE_COMPILER_IS_GNUCXX)
		set(CMAKE_CXX_FLAGS "-std=c++11 -lpthread -o3 ${CMAKE_CXX_FLAGS}")
endif()

add_executable(Assign5
		Main.cpp
		Hash.cpp
		Hash.h
		Queue.cpp
		Queue.h
)