cmake_minimum_required(VERSION 2.8.4)
project(Crazy_River_Rider)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp
                 src/estructurasDeDatos.cpp
                 src/gui.cpp
                 src/objects.cpp
                 src/observer.cpp
                 src/protohandler.cpp
                 src/terrain.cpp
                 src/eventos.pb.cc)
set(HEADERS_FILES headers/eventos.pb.h
                    headers/clasesLogicas.h
                    headers/estructurasDeDatos.h
                    headers/gui.h
                    headers/objects.h
                    headers/observer.h
                    headers/protohandler.h
                    headers/terrain.h
                    headers/constants.h
                    headers/servidorDeControl.h

                    )


include_directories(src res headers)
add_executable(Crazy_River_Rider ${SOURCE_FILES} ${HEADERS_FILES})

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
