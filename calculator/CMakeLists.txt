cmake_minimum_required(VERSION 2.8)

set(LIB_NAME CalculatorLib)

project(${LIB_NAME})

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(. SRC)

include_directories(${FiguresLib_SOURCE_DIR})
include_directories(${FileParsersLib_SOURCE_DIR})

add_library(${LIB_NAME} STATIC ${SRC})

