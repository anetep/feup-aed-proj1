//
// Created by anete on 20/10/2022.
//

#ifndef SRC_MENU_H
#define SRC_MENU_H

#include "ReadFiles.h"
using namespace std;


class Menu {

public:
    Menu();

    static void showMenuOccupation();// Mostra numero de pessoas numa determinada turma numa determinada UC

    static void showMenuHorario(); // mostra o horário de um determinado aluno

    static void showMenuTurma(); // mostra determinada turma

    static void showMenuUnidadeCurricular();// mostra alunos inscritos em determinada Uc

    static void showMenuStudentSomeUCs(); // mostra alunos com mais de n UnidadesCurriculares;

    static void showMenuOccupationOrder(); // Informa a ordem


};


#endif //SRC_MENU_H
