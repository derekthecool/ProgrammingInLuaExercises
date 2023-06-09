cmake_minimum_required(VERSION 3.26.4)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(ProgrammingInLuaExercise
    LANGUAGES C
    DESCRIPTION "Working through the book Programming in Lua")

add_subdirectory(lua)
add_subdirectory(main)
