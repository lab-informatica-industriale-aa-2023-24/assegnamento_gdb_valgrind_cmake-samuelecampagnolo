cmake_minimum_required(VERSION 3.22.1)
project( CMake_assegnamento_gdb
    VERSION 0.1
    DESCRIPTION "Parte assegnamento sul gdb"
    LANGUAGES C)
add_executable(eseguibile src/gdb1.c src/gdb2.c src/gdb3.c)
target_include_directories(eseguibile PRIVATE include)
