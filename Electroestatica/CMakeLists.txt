cmake_minimum_required(VERSION 3.13)
project(Electroestática)

set(CMAKE_CXX_STANDARD 17)

add_executable(Electroestatica main.cpp Particula.cpp Particula.h Simulador.cpp Simulador.h Electroestatica-test.cpp)