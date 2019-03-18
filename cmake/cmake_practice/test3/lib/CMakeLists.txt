set(LIBHELLO_SRC hello.cpp)

add_library(hello SHARED ${LIBHELLO_SRC})
add_library(hello_static STATIC ${LIBHELLO_SRC})
set_target_properties(hello_static PROPERTIES OUTPUT_NAME "hello")