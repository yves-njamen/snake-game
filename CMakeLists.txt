# only for cmake --version >= 3.5.1
cmake_minimum_required(VERSION 3.5.1)

# project name
project(snake-game)

# creates the variable EXEC and sets it to hello
set(EXEC snake-game)

# set the C++14 standard
set(CMAKE_CXX_STANDARD 14)

# I../includes
find_package(Qt5 REQUIRED COMPONENTS
    Core
    Gui
    Widgets
)
set(CMAKE_AUTOMOC ON)

include_directories(include)

# puts all .cpp files inside src to the SOURCES variable
file(GLOB SOURCES src/*.cpp)

# compiles the files defined by SOURCES to generante the executable defined by EXEC
add_executable(${EXEC} ${SOURCES})

# target link for QT
target_link_libraries(${PROJECT_NAME}
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)