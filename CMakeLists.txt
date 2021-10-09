cmake_minimum_required(VERSION 3.20)
project(derivingClasses)

set(CMAKE_CXX_STANDARD 14)

add_executable(derivingClasses main.cpp Account.cpp Account.h Saving_Account.cpp Saving_Account.h)
