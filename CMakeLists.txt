cmake_minimum_required(VERSION 3.10)
project(rpi_cam LANGUAGES CXX)

# Use modern C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Put all compiled files into build/bin and build/lib
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Collect all source files from src/
file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)
# Add include directories
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/src
    ${PROJECT_SOURCE_DIR}/src/Machine_Etat
    ${PROJECT_SOURCE_DIR}/src/Motion
    ${PROJECT_SOURCE_DIR}/src/Notification
    ${PROJECT_SOURCE_DIR}/src/Record
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

