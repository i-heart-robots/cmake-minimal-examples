cmake_minimum_required(VERSION 3.8)
project(main)

# Add Matt Arsenault's sanitizer project
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
find_package(Sanitizers)

# Add utils project
add_subdirectory(utils)

## Main executable
add_executable(main main.cpp)
add_sanitizers(main)
target_link_libraries(main LINK_PUBLIC utils)
target_compile_features(main PUBLIC cxx_std_17)

# Notes:
# Enable sanitizers - e.g. editline 25 in cmake/FindASan.cmake and change 'Off' to 'On'
# mkdir build; cd build; cmake .. --debug-output; make VERBOSE=1
