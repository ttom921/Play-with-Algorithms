cmake_minimum_required( VERSION 3.10)
project(SelectionSort)

set(app_name SelectionSort)

#³]¸m½sÄ¶¿é¥X¸ô®|
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

file(GLOB headers *.h)
file(GLOB src *.cpp)


add_executable(${app_name}
${headers}
${src}
)
