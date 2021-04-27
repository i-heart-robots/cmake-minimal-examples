cmake_minimum_required(VERSION 3.8)
project(main)

add_subdirectory(utils)

## main executable
add_executable(main main.cpp)
target_link_libraries(main LINK_PUBLIC utils)
target_compile_features(main PUBLIC cxx_std_17)
