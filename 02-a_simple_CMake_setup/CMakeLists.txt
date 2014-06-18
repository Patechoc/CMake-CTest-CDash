cmake_minimum_required(VERSION 2.8)

project(02-a_simple_Cmake_setup)

add_executable(Tutorial tutorial.cxx)

install(TARGETS Tutorial DESTINATION bin)