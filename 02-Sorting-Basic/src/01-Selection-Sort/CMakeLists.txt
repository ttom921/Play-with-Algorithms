cmake_minimum_required( VERSION 3.9.2)

project(SelectionSort)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(SOURCE_FILES main.cpp)
add_executable(SelectionSort ${SOURCE_FILES})
