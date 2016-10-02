cmake_minimum_required(VERSION 3.6)
project(quote)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Quote.h Quote.cpp Bulk_quote.h)
add_executable(quote ${SOURCE_FILES})