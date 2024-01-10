cmake_minimum_required(VERSION 3.10)
project(game-engine)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)
#find_package(glm REQUIRED)
find_package(OpenGL REQUIRED)


# Include directories for header files
include_directories(headers)

# Get all source files from src directory
file(GLOB SRC_FILES "src/*.cpp")

# Add executable
add_executable(game-engine ${SRC_FILES} app.cpp)

# Link libraries
target_link_libraries(game-engine glfw GLEW::GLEW ${OPENGL_LIBRARIES}) #glm