set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
cmake_policy(SET CMP0020 NEW)

find_package(Qt5Core)
find_package(Qt5Gui)

add_definitions(-DCMS_DLL)

add_executable(exercise1 main.cpp data.qrc)

set_property(TARGET exercise1 PROPERTY CXX_STANDARD 11)

target_link_libraries(exercise1 Qt5::Core Qt5::Gui lcms2)
