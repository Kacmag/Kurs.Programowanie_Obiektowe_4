set(HEADER_LIST LinearEquations.hh)
set(SRC_LIST LinearEquations.cpp)


add_library(LinearEquations ${SRC_LIST} ${HEADER_LIST})

target_include_directories(LinearEquations PUBLIC .)


target_link_libraries(LinearEquations PUBLIC vector)
add_dependencies(LinearEquations vector)

target_link_libraries(LinearEquations PUBLIC matrix)
add_dependencies(LinearEquations matrix)

target_link_libraries(LinearEquations PUBLIC LZespolona)
add_dependencies(LinearEquations LZespolona)