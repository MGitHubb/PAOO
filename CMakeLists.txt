#CMake version
cmake_minimum_required(VERSION 3.2)

#Project name
project(first_cpp_program)

if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
    endif()    
endif()


# Define the executable
add_executable(${PROJECT_NAME} src/tema3.cpp)