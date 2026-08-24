cmake_minimum_required(VERSION 3.14)

project(SimpleATM)

add_library(atm src/ATM.cpp)
target_include_directories(atm PUBLIC src)

add_executable(atm_test tests/test.cpp)
target_link_libraries(atm_test atm)