cmake_minimum_required(VERSION 3.8)
project(main)

# external library
add_library(utils STATIC IMPORTED)
set_target_properties(utils PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/../utils/build/libutils.a)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../utils/include)

## main executable
add_executable(main main.cpp)
target_link_libraries(main LINK_PUBLIC utils)
target_compile_features(main PUBLIC cxx_std_17)
