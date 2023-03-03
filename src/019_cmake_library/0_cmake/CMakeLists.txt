# Set the minimum version of cmake for building this project
cmake_minimum_required(VERSION 3.22.1)

# Set the project and version we're building
project(Math)

# Add the library we want to build
add_library(math SHARED add.cpp multiply.cpp)

# Add the executable we want to build
add_executable(main main.cpp)

# Specify that we need to link against our created library
target_link_libraries(main math)
