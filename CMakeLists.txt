# only for cmake --version >= 3.5.1
cmake_minimum_required(VERSION 3.5.1)

# requirement for Qt 
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_PREFIX_PATH "C:\\Qt\\5.15.2\\mingw81_64\\lib\\cmake")

find_package(QT NAMES Qt5 COMPONENTS Widgets REQUIRED)


# project name
project(snake-game)

# creates the variable EXEC and sets it to hello
set(EXEC snake-game)

# set the C++14 standard
set(CMAKE_CXX_STANDARD 14)

# I../includes
include_directories(include)

# puts all .cpp files inside src to the SOURCES variable
file(GLOB SOURCES src/*.cpp)

# compiles the files defined by SOURCES to generante the executable defined by EXEC
add_executable(${EXEC} ${SOURCES})

target_link_libraries(snake-game PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)