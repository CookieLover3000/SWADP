cmake_minimum_required(VERSION 3.25)
project(opdracht2)

set(CMAKE_CXX_STANDARD 20)

add_executable(opdracht2 main.cpp Snelheid.cpp Snelheid.h DigitaleMeter.cpp DigitaleMeter.h AnalogeMeter.cpp AnalogeMeter.h Auto.cpp Auto.h Observer.h Observer.cpp)
