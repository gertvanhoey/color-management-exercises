cmake_minimum_required(VERSION 3.5)

project(color-management-exercises)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(IGNORE "${QT_QMAKE_EXECUTABLE}")

add_subdirectory(submodules/Little-CMS)
add_subdirectory(src)
