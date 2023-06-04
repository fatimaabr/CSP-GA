cmake_minimum_required(VERSION 3.0)
project(RectangleCuttingProject)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp-project-GA src/main.cpp src/GeneticAlgorithm.cpp src/GuillotineCuts.cpp src/Rectangle.cpp)
