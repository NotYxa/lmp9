cmake_minimum_required(VERSION 3.29)
project(lmp9 C)

set(CMAKE_C_STANDARD 11)

include_directories(Downloads/lmp91tar/lmp9/src)

add_executable(lmp9
    Downloads/lmp91tar/lmp9/src/._backsubst.c
    Downloads/lmp91tar/lmp9/src/._backsubst.h
    Downloads/lmp91tar/lmp9/src/._gauss.c
    Downloads/lmp91tar/lmp9/src/._gauss.h
    Downloads/lmp91tar/lmp9/src/._main.c
    Downloads/lmp91tar/lmp9/src/._mat_io.c
    Downloads/lmp91tar/lmp9/src/._mat_io.h
    Downloads/lmp91tar/lmp9/src/backsubst.c
    Downloads/lmp91tar/lmp9/src/backsubst.h
    Downloads/lmp91tar/lmp9/src/gauss.c
    Downloads/lmp91tar/lmp9/src/gauss.h
    Downloads/lmp91tar/lmp9/src/main.c
    Downloads/lmp91tar/lmp9/src/mat_io.c
    Downloads/lmp91tar/lmp9/src/mat_io.h)
