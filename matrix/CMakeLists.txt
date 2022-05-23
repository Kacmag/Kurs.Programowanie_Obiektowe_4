set(HEADER_LIST matrix.hh)
set(SRC_LIST matrix.cpp)


add_library(matrix ${SRC_LIST} ${HEADER_LIST})

target_include_directories(matrix PUBLIC .)


target_link_libraries(matrix PUBLIC vector)
add_dependencies(matrix vector)
