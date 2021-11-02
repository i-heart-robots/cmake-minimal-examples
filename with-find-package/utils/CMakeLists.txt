cmake_minimum_required(VERSION 3.8)
project(utils)

## utils library
list(APPEND utils_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/include")
list(APPEND utils_LIBRARIES "${PROJECT_BINARY_DIR}/libutils.a")

add_library(utils src/utils.cpp)
target_include_directories(utils PUBLIC ${utils_INCLUDE_DIRS})
target_compile_features(utils PUBLIC cxx_std_17)
configure_file(config.cmake.in "${PROJECT_BINARY_DIR}/utilsConfig.cmake")
