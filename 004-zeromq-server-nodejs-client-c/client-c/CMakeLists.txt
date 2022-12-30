cmake_minimum_required(VERSION 3.0)
project(zeromq_client)

find_package(PkgConfig)
pkg_check_modules(PC_ZeroMQ QUIET zmq)

find_path(ZeroMQ_INCLUDE_DIR
        NAMES zmq.h
        PATHS ${PC_ZeroMQ_INCLUDE_DIRS}
        )

find_library(ZeroMQ_LIBRARY
        NAMES zmq
        PATHS ${PC_ZeroMQ_LIBRARY_DIRS}
        )

message(${ZeroMQ_LIBRARY})
message(${ZeroMQ_INCLUDE_DIR})

add_executable(${CMAKE_PROJECT_NAME} src/main.c)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC ${ZeroMQ_INCLUDE_DIR})
target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC zmq)