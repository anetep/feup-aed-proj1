//
// Created by anete on 20/10/2022.
//

#ifndef SRC_MENU_H
#define SRC_MENU_H

#include "ReadFiles.h"


class Menu {

public:
    Menu();

    static void showMenuOccupation();// Mostra numero de pessoas numa determinada turma numa determinada UC

    static void showMenuHorario(); // mostra o horário de um determinado aluno

    void showMenuAlunos(); // mostra determinada turma

    void showMenuUnidadeCurricular();// mostra alunos inscritos em determinada Uc

    void showMenuStudentSomeUCs(); // mostra alunos com mais de n UnidadesCurriculares;

    void showMenuOccupationOrder(); // Informa a ordem


};


#endif //SRC_MENU_H
