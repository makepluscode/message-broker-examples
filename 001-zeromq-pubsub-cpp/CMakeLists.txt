cmake_minimum_required(VERSION 3.0)
project(zeromq_pubsub)

set(CMAKE_CXX_STANDARD 11)

find_package(PkgConfig)
pkg_check_modules(PC_ZeroMQ QUIET zmq)

find_path(ZeroMQ_INCLUDE_DIR
        NAMES zmq.hpp
        PATHS ${PC_ZeroMQ_INCLUDE_DIRS}
        )

find_library(ZeroMQ_LIBRARY
        NAMES zmq
        PATHS ${PC_ZeroMQ_LIBRARY_DIRS}
        )

message(${ZeroMQ_LIBRARY})
message(${ZeroMQ_INCLUDE_DIR})

add_executable(zeropub src/pub.cpp)
add_executable(zerosub src/sub.cpp)

target_include_directories(zeropub PUBLIC ${ZeroMQ_INCLUDE_DIR})
target_include_directories(zerosub PUBLIC ${ZeroMQ_INCLUDE_DIR})

target_link_libraries(zeropub PUBLIC zmq zmqpp)
target_link_libraries(zerosub PUBLIC zmq zmqpp)