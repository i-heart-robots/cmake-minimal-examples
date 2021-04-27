cmake_minimum_required(VERSION 3.8)
project(utils)

## utils library
add_library(utils src/utils.cpp)
target_include_directories (utils PUBLIC include)
target_compile_features(utils PUBLIC cxx_std_17)
