cmake_minimum_required(VERSION 3.10)
project(qete)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# SHOULD BE SET
#set(CMAKE_PREFIX_PATH "/path/to/Qt-installation")

add_executable(qete main.cpp)
target_link_libraries(qete Qt5::Widgets)
