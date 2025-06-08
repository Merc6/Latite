cmake_minimum_required(VERSION 3.16..4.0)

project(Latite VERSION 2.1.0
               DESCRIPTION "A Minecraft Bedrock Utility Client"
               LANGUAGES CXX)
    
add_subdirectory(libs/api)
add_subdirectory(libs/client)
add_subdirectory(libs/sdk)
add_subdirectory(libs/util)
add_subdirectory(libs/core_utils)

add_subdirectory(src)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__FILENAME__='\"$(subst
  ${CMAKE_SOURCE_DIR}/,,$(abspath $<))\"'")
