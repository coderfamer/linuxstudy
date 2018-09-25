cmake_minimum_required(VERSION 2.8)

project(myreactorserver)

aux_source_directory(./ SRC_LIST)
set(EXECUTABLE_OUTPUT_PATH ./)


add_definitions(-g -W -Wall -Wno-deprecated -DLINUX -D_REENTRANT -D_FILE_OFFSET_BITS=64 
-DAC_HAS_INFO -DAC_HAS_WARNING -DAC_HAS_ERROR -DAC_HAS_CRITICAL -DTIXML_USE_STL 
-DHAVE_CXX_STDHEADERS ${CMAKE_CXX_FLAGS} -std=c++11)

INCLUDE_DIRECTORIES(./)
LINK_DIRECTORIES(./)

SET(
    main.cpp
    myreactor.cpp
)

add_executable(myreactorserver ${SRC_LIST})

target_link_libraries(myreactorserver pthread)