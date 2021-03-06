cmake_minimum_required(VERSION 3.16.3)

project(grpc_chat)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "limited configs" FORCE)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--no-as-needed -lgrpc++_reflection -Wl,--as-needed -ldl")

find_package(Threads)
find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)

set(SOURCE_FILES grpc_server.cpp cgen/chat.grpc.pb.h cgen/chat.grpc.pb.cc cgen/chat.pb.cc cgen/chat.pb.h)

add_executable(main ${SOURCE_FILES})

target_link_libraries(main
        Threads::Threads
        protobuf::libprotobuf
        gRPC::grpc++_unsecure
        gRPC::grpc++_reflection
        ${CMAKE_SHARED_LINKER_FLAGS})
set_target_properties(main PROPERTIES OUTPUT_NAME main)