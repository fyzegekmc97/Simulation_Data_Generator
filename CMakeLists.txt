cmake_minimum_required(VERSION 3.21)
project(Simulation_Data_Generator LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 11)

add_executable(Simulation_Data_Generator main.cpp Geometric_Data_Generator.cpp Geometric_Data_Generator.h Speed_Acceleration_Data_Generator.cpp Speed_Acceleration_Data_Generator.h)

target_include_directories(Simulation_Data_Generator PRIVATE /usr/local/include/botan-3)