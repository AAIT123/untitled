cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Conversiones.cpp
        Conversiones.h
        Fechas.cpp
        Fechas.h
        Mate.cpp
        Mate.h
        Caracteres.cpp
        Caracteres.h
        Nutricion.cpp
        Nutricion.h)
