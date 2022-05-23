add_executable(target main.cpp)

target_include_directories(target PUBLIC .)

target_link_libraries(target PUBLIC vector)
target_link_libraries(target PUBLIC matrix)
target_link_libraries(target PUBLIC LZespolona)
target_link_libraries(target PUBLIC LinearEquations)


add_dependencies(target vector)
add_dependencies(target matrix)
add_dependencies(target LZespolona)
add_dependencies(target LinearEquations)
