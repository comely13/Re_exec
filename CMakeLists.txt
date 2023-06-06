#set cmake project name
project(Remote_Exec)
#set cmake version
cmake_minimum_required(VERSION 3.20)
#set c++ version
set(CMAKE_CXX_STANDARD 17)
#set c++ flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -Wpedantic -Wshadow -Wnon-virtual-dtor -Wold-style-cast -Wcast-align -Wunused -Woverloaded-virtual -Wconversion -Wsign-conversion -Wmisleading-indentation -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wnull-dereference -Wuseless-cast -Wdouble-promotion -Wformat=2")
#set project build type
set(CMAKE_BUILD_TYPE Debug)
#set project build path
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
#add re_cli project
add_subdirectory(re_Cli)
#add re_server project
add_subdirectory(re_Serv)

