cmake_minimum_required(VERSION 3.5)    # cmake version 3.27.1
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading Hello World App"
        LANGUAGES CXX)
add_executable(HelloAppBin main.cpp)
target_compile_features(HelloAppBin PRIVATE cxx_std_20)

message("-- CMAKE_CXX_COMPILER: ${CMAKE_CXX_COMPILER_ID}")
message("-- CMAKE_CXX_COMPILER_VERSION: ${CMAKE_CXX_COMPILER_VERSION}")