cmake_minimum_required(VERSION 3.10)
project (hello-cmake)
add_executable(hello-cmake hello-cmake.c)
install(TARGETS hello-cmake RUNTIME DESTINATION /usr/bin)

