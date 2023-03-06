# Add the library we want to build
add_library(math SHARED add.cpp multiply.cpp)

# Expose the header files
target_include_directories(math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
