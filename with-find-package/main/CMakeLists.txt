cmake_minimum_required(VERSION 3.8)
project(main)

# If the package we need was not registered w/ cmake's local package registry, then
# uncomment the next 2 lines to tell cmake where to find `utilsConfig.cmake`.
# set(utils_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../utils/build/)
# list(APPEND CMAKE_MODULE_PATH ${utils_DIR})
find_package(utils REQUIRED)

## main executable
add_executable(main main.cpp)
target_compile_features(main PUBLIC cxx_std_17)
# utils_INCLUDE_DIRS and utils_LIBRARIES are defined in utilsConfig.cmake
target_include_directories(main PUBLIC ${utils_INCLUDE_DIRS})
target_link_libraries(main ${utils_LIBRARIES})
