project(platforms-module LANGUAGES CXX)

add_library(${PROJECT_NAME})

add_subdirectory(core)
add_subdirectory(backends)
add_subdirectory(platforms)