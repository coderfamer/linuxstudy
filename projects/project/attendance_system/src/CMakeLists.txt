if ("${SYSTEM_TYPE}" STREQUAL "LINUX")
    include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/src/libs
        /usr/local/include
        )

    link_directories(
        ${PROJECT_SOURCE_DIR}/build/LINUX/usr/lib
        )
endif()

set(ATTENDANCE_SYS_SRC_LIST
    libs/manager.cpp
    libs/interface.cpp
    libs/disk.cpp
    libs/admin.cpp
    libs/counsellor.cpp
    libs/teacher.cpp
    libs/student.cpp
    libs/public.cpp
    main.cpp
    )

add_executable(attendance_sys ${JDEBUG_FLAG} ${ATTENDANCE_SYS_SRC_LIST})

if ("${SYSTEM_TYPE}" STREQUAL "LINUX")
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
    #    set(ATTENDANCE_SYS_PLATFORM_LINK_LIBS
    #   sqlite3
    #   )
    link_libraries(sqlite3)
endif()

set(ATTENDANCE_SYS_LINK_LIBS
    ${ATTENDANCE_SYS_PLATFORM_LINK_LIBS}
    )
