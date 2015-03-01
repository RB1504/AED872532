cmake_minimum_required(VERSION 2.8.4)
project(Crazy_River_Rider)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.cpp
    constants.h
    estructurasDeDatos.h
    eventos.pb.cc
    eventos.pb.h
    gui.cpp
    gui.h
    objects.cpp
    objects.h
    player.png
    protohandler.cpp
    protohandler.h
    terrain.cpp
    terrain.h

    )

add_executable(Crazy_River_Rider ${SOURCE_FILES})

set(LIBS
    liballegro.so
    liballegro_image.so
    liballegro_primitives.so
    liballegro_color.so)


include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})


TARGET_LINK_LIBRARIES(Crazy_River_Rider ${LIBS}
                        ${Boost_FILESYSTEM_LIBRARY}
                        ${Boost_SYSTEM_LIBRARY}
                        ${PROTOBUF_LIBRARY} )
