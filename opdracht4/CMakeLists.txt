cmake_minimum_required(VERSION 3.25)
project(opdracht4)

set(CMAKE_CXX_STANDARD 17)

add_executable(opdracht4 main.cpp Machine.h Motor.h Sensor.h Observer.cpp Observer.h Mone.h Mtwo.h ToonT.cpp ToonT.h MachineIMP.cpp MachineIMP.h MoneIMP.cpp MoneIMP.h MtwoIMP.cpp MtwoIMP.h SensorIMP.cpp SensorIMP.h)
