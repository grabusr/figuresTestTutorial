cmake_minimum_required(VERSION 2.8)

set(TEST_NAME Tests)

project(${TEST_NAME})

set(CMAKE_CXX_STANDARD 14)

include_directories(${gtest_SOURCE_DIR}/include)
include_directories(${gmock_SOURCE_DIR}/include)
include_directories(${FiguresLib_SOURCE_DIR})
include_directories(${FileParsersLib_SOURCE_DIR})
include_directories(${CalculatorLib_SOURCE_DIR})

aux_source_directory(. SRC)

add_executable(${TEST_NAME} ${SRC} SquareTest.cpp)

target_link_libraries(${TEST_NAME} gmock gmock_main)
target_link_libraries(${TEST_NAME} FiguresLib)
target_link_libraries(${TEST_NAME} FileParsersLib)
target_link_libraries(${TEST_NAME} CalculatorLib)

