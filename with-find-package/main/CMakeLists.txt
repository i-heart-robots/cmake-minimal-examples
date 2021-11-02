cmake_minimum_required(VERSION 3.8)
project(main)

# Tell cmake where to find the Config.cmake file for the external library
# set(utils_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../utils/build/cmake/)
# list(APPEND CMAKE_MODULE_PATH ${utils_DIR})
find_package(utils REQUIRED)

## main executable
add_executable(main main.cpp)
target_compile_features(main PUBLIC cxx_std_17)
target_include_directories(main PUBLIC ${utils_INCLUDE_DIRS})
target_link_libraries(main ${utils_LIBRARIES})
