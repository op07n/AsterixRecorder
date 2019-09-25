cmake_minimum_required(VERSION 3.8)

project(AsterixRecorder)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Network REQUIRED)

INCLUDE_DIRECTORIES(".\\GeneratedFiles")

set(SRCS main.cpp
         AsterixRecorder.cpp
         UDPListener.cpp)
	 
set_property(SOURCE UDPListener.cpp PROPERTY SKIP_AUTOMOC ON)	 
         
add_executable(${PROJECT_NAME} ${SRCS})

set_target_properties(${PROJECT_NAME} PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARTD_REQUIRED ON
)


qt5_use_modules(AsterixRecorder Widgets Core Gui Network)

# target_link_libraries(${PROJECT_NAME}
#     ${Qt5Core_LIBRARIES}
#     ${Qt5Network_LIBRARIES}
# )
