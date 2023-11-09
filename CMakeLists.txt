cmake_minimum_required(VERSION 3.26)
project(FactoryMethodPattern1)

set(CMAKE_CXX_STANDARD 23)

add_executable(FactoryMethodPattern1 main.cpp
        Item.h
        Item.cpp
        Shield.cpp
        Shield.h
        Hammer.cpp
        Hammer.h
        ItemFactory.cpp
        ItemFactory.h
        ItemGenerator.cpp
        ItemGenerator.h)
