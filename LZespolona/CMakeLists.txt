set(HEADER_LIST LZespolona.hh)
set(SRC_LIST LZespolona.cpp)


add_library(LZespolona ${SRC_LIST} ${HEADER_LIST})

target_include_directories(LZespolona PUBLIC .)
