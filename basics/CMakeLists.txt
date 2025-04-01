cmake_minimum_required(VERSION 3.30)

# Set the project name
project(CppTemplatesBasics)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

 # Manually list all source files
set(SRC_FILES
    src/utils.cpp
    src/explicit_temp_instantions.cpp
)

# Add the executable
add_executable(CppTemplatesBasics main.cpp ${SRC_FILES})

# Add include directory
target_include_directories(CppTemplatesBasics PRIVATE include)