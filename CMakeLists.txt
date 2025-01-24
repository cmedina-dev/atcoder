cmake_minimum_required(VERSION 3.20)
project(AtCoder)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SOURCE_DIRECTORIES
        Gray
        Brown
        Cyan
)

foreach(DIR ${SOURCE_DIRECTORIES})
    file(GLOB SOURCES "${DIR}/*.cpp")

    foreach(SOURCE ${SOURCES})
        get_filename_component(EXECUTABLE_NAME ${SOURCE} NAME_WE)

        add_executable(${EXECUTABLE_NAME} ${SOURCE})

        set_target_properties(${EXECUTABLE_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

        if(MSVC)
            target_compile_options(${EXECUTABLE_NAME} PRIVATE /W4 /WX)
        else()
            target_compile_options(${EXECUTABLE_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror)
        endif()
    endforeach()
endforeach()