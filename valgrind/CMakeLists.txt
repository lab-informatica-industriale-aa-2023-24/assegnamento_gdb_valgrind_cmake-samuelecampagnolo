cmake_minimum_required(VERSION 3.22.1)
project( CMake_assegnamento_valgrind
    VERSION 0.1
    DESCRIPTION "Parte assegnamento su valgrind"
    LANGUAGES C)
add_executable(eseguibile src/valgrind1.c src/valgrind2.c src/valgrind3.c src/valgrind4.c)
target_include_directories(eseguibile PRIVATE include)
