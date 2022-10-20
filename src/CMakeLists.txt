cmake_minimum_required(VERSION 3.21)
project(src)

set(CMAKE_CXX_STANDARD 14)

add_executable(src main.cpp Menu.cpp Menu.h Horario.cpp Horario.h Estudante.cpp Estudante.h Turma.cpp Turma.h Aula.cpp Aula.h)
