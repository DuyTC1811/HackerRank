CMAKE_MINIMUM_REQUIRED(VERSION 3.28)            # Đặt phiên bản tối thiểu của Cmake
PROJECT(HackerRank VERSION 0.1)                 # Đặt Phiên bản cho project
SET(CMAKE_CXX_STANDARD 20)                      # Sử dụng phên bản C++ 20
SET(CMAKE_CXX_STANDARD_REQUIRED True)           # C++ 20 là bắt buộc

ADD_EXECUTABLE(HackerRank Bubble-Sort.cpp)      # Thêm executable
