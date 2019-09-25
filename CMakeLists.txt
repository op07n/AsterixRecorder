cmake_minimum_required(VERSION 3.8)

project(AsterixRecorder)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

# Find the Qt libraries
find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Sql CONFIG REQUIRED)

set(SRCS main.cpp
         AsterixRecorder.cpp)
         
add_executable(${PROJECT_NAME} ${SRCS})

set_target_properties(${PROJECT_NAME} PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARTD_REQUIRED ON
)

target_link_libraries(${PROJECT_NAME}   Qt5::Core
)
