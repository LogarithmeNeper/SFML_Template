cmake_minimum_required(VERSION 3.17)
project(my_project_name)

set(CMAKE_CXX_STANDARD 14)

add_executable(my_project_name main.cpp)

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2.5 REQUIRED system window graphics network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})
endif()

file(COPY OpenSans-Bold.ttf DESTINATION "${CMAKE_BINARY_DIR}")