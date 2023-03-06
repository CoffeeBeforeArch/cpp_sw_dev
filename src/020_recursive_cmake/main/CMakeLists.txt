# Add the executable we want to build
add_executable(main main.cpp)

# Specify that we need to link against our created library
target_link_libraries(main math)
