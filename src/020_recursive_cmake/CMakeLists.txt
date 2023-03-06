# Set the minimum version of cmake for building this project
cmake_minimum_required(VERSION 3.22.1)

# Set the project and version we're building
project(Recursive)

# Specify the directories we want to recurse into
add_subdirectory(math)
add_subdirectory(main)
