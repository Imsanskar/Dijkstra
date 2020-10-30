
cmake_minimum_required(VERSION 3.17)
project(DSA_PROJECT)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSA_PROJECT main.cpp)

target_link_libraries(DSA_PROJECT SDL2)
