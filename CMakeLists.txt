cmake_minimum_required(VERSION 3.0)
project(Testing)

add_executable(Testing)
target_include_directories(Testing PRIVATE src)
target_sources(Testing PRIVATE src/main.cpp)
target_compile_features(Testing PRIVATE cxx_std_17)
