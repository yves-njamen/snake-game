# only for cmake --version >= 3.5.1
cmake_minimum_required(VERSION 3.5.1)

# project name
project(snake-game)
set (CMAKE_PREFIX_PATH "C:/Qt/5.15.2/mingw81_64/lib/cmake")

# creates the variable EXEC and sets it to snake-game
set(EXEC snake-game)

# set the C++14 standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# puts all .cpp files inside src to the SOURCES variable
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(src_files 
    src/my_snakegame.cpp
    src/main.cpp
    )

# header
set( header 
    include/my_snakegame.h
    include/ui_snakegame.h        

)


# requirement for Qt 
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_library(source STATIC ${src_files})


# compiles the files defined by SOURCES to generante the executable defined by EXEC
add_executable(${EXEC} ${src_files} ${header})

target_include_directories(${EXEC} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${EXEC} Qt5::Widgets Qt5::Core Qt5::Gui)
