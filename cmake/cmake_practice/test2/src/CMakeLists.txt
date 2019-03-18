

message(STATUS "This is BINARY dir" ${HELLO_BINARY_DIR})
message(STATUS "This is SOURCE dir" ${HELLO_SOURCE_DIR})



set(SRC_LIST main.cpp)
add_executable(hello ${SRC_LIST})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

