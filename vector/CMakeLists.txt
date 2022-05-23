set(HEADER_LIST vector.hh)
set(SRC_LIST vector.cpp)


add_library(vector ${SRC_LIST} ${HEADER_LIST})

target_include_directories(vector PUBLIC .)
