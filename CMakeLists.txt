
cmake_minimum_required(VERSION 3.17)
project(DSA_PROJECT)

set(CMAKE_CXX_STANDARD 14)
include_directories(includes/)
add_executable(DSA_PROJECT main.cpp includes/texture.h source/texture.cpp)

target_link_libraries(DSA_PROJECT SDL2 SDL2_ttf)
