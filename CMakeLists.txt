cmake_minimum_required(VERSION 3.30)
project(BaseConverter)

set(CMAKE_CXX_STANDARD 26)

add_executable(BaseConverter main.cpp
        stringManipulator.cpp
        stringManipulator.h
        calculationHelper.cpp
        calculationHelper.h
        dataStructureConverter.cpp
        dataStructureConverter.h
        globals.cpp
        globals.h
        hexConverter.cpp
        hexConverter.h)
