cmake_minimum_required(VERSION 3.12)
project(SerialSBMS_Esp8266)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SerialSBMS_Esp8266
        Battery.cpp
        Battery.h
        config.cpp
        config.h
        MyWifi.cpp
        MyWifi.h
        OTA.cpp
        OTA.h
        Relay.h
        SBMS.cpp
        SBMS.h
        Taster.h
        webpage.h)
