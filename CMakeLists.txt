cmake_minimum_required(VERSION 3.10.2)
project(Assegnamento_gdb_valgrind_CMake
    	VERSION 0.9
    	DESCRIPTION "Terzo assegnamento laboratorio di informatica"
    	LANGUAGES C)

#Aggiungiamo le subdirectory degli altri cmake
add_subdirectory(gdb)
add_subdirectory(valgrind)
