
cmake_minimum_required(VERSION 3.17)
project(DSA_PROJECT)

set(CMAKE_CXX_STANDARD 14)
include_directories(includes/)
add_executable(DSA_PROJECT main.cpp includes/texture.h source/texture.cpp source/Dijkstra.cpp includes/Dijkstra.h includes/Node.h source/Node.cpp includes/Graph.h source/Graph.cpp includes/Node.h includes/Edge.h source/Edge.cpp source/Button.cpp includes/Button.h)

target_link_libraries(DSA_PROJECT SDL2 SDL2_ttf)
