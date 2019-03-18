cmake_minimum_required(VERSION 3.10)
project(HELLO)

add_subdirectory(src bin)

install(FILES COPYRIGHT README DESTINATION share/doc/cmake/test2)
install(PROGRAMS runhello.sh DESTINATION bin)
