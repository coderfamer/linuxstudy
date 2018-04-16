cmake_minimum_required(VERSION 2.8)

project(attendance_sys)

add_definitions("-std=c++11 -lsqlite3")
link_libraries(sqlite3)
add_subdirectory(src)

if (${BUILD_DEBUG})
    add_definitions("-g -Wall")
    set(JDEBUG_FLAG -d)
endif()

