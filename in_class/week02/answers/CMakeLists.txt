# The minimum version of CMake Required 
cmake_minimum_required (VERSION 2.6)

# Any project name will suffice, this has connotaions when using advanced CMake Features
project (rectangles)

# This is added to c++11 features
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# To add executables provide the executable name followed by a list of source files
# There must be exactly one function called main in each executable

# This executable demonstrates random number generation
add_executable(rand_func rand_func.cpp)

# This executable demonstrates the declaration, implementation, and use of the rectangle class
# Notice we now have two source files, one has our main, the other implements our rectangle class
add_executable(rectangle_eg rectangle_main.cpp rectangle.cpp)
