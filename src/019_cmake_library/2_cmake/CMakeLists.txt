# Set the minimum version of cmake for building this project
cmake_minimum_required(VERSION 3.22.1)

# Set the project and version we're building
project(Threads)

# Set the C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set C++-specific Flags
set(CMAKE_CXX_FLAGS "-Wall -Werror -O2 -march=native")

# Add the executable we want to build
add_executable(clamp_bench clamp_bench.cpp)

# Find our installed google benchmark library
find_package(benchmark REQUIRED)
target_link_libraries(clamp_bench benchmark::benchmark)
