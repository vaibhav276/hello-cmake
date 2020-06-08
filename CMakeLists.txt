cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(hello-world VERSION 1.0)

add_subdirectory(app)
add_subdirectory(lib)
add_subdirectory(test)
