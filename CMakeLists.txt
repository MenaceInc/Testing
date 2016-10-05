cmake_minimum_required(VERSION 3.4)
project(com_menaceinc_Testing)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -static")

set(SOURCE_FILES src/main.cpp)
add_executable(Testing ${SOURCE_FILES})
