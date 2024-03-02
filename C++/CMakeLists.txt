cmake_minimum_required(VERSION 3.28) # Đặt phiên bản tối thiểu của Cmake
project(HackerRank VERSION 0.1)      # Đặt Phiên bản cho project
set(CMAKE_CXX_STANDARD 20)           # Sử dụng phên bản C++ 20
set(CMAKE_CXX_STANDARD_REQUIRED True)# C++ 20 là bắt buộc

add_executable(HackerRank Reverse-Array.cpp) # Thêm executable
