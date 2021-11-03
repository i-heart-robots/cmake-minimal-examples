cmake_minimum_required(VERSION 3.8)
project(utils)

# Manually create (or append to) the needed variables for other projects to find this one.
list(APPEND utils_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}/include")
list(APPEND utils_LIBRARIES "${PROJECT_BINARY_DIR}/libutils.a")

# Create the library.
add_library(utils src/utils.cpp)
target_include_directories(utils PUBLIC ${utils_INCLUDE_DIRS})
target_compile_features(utils PUBLIC cxx_std_17)

# Create the utilsConfig.cmake file that other projects can use.
configure_file(config.cmake.in "${PROJECT_BINARY_DIR}/utilsConfig.cmake")

# Register this package w/ cmake's local package registry (e.g. ~/.cmake/packages/<package>)
# Otherwise, we'd need a `set(utils_DIR /path/to/utils)` in the dependent packages CMakeLists.txt,
# before the call to find_package(utils)
export(PACKAGE utils)
