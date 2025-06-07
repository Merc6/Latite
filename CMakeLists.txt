cmake_minimum_required(VERSION 3.16..4.0)

project(Latite VERSION 2.1.0
               DESCRIPTION "A Minecraft Bedrock Utility Client"
               LANGUAGES CXX)

add_library(Latite SHARED)

include(cmake/Sources.cmake)

add_library(Latite.api STATIC)
add_library(Latite.client STATIC)
add_library(Latite.sdk STATIC)
add_library(Latite.util STATIC)
