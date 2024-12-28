cmake_minimum_required(VERSION 3.20)
project(AtCoder)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB GRAY_SOURCES "Gray/*.cpp")
file(GLOB BROWN_SOURCES "Brown/*.cpp")
file(GLOB CYAN_SOURCES "Cyan/*.cpp")

foreach(SOURCE ${GRAY_SOURCES})
    get_filename_component(EXECUTABLE_NAME ${SOURCE} NAME_WE)

    add_executable(${EXECUTABLE_NAME} ${SOURCE})

    set_target_properties(${EXECUTABLE_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
endforeach()