//
// Created by anete on 20/10/2022.
//
/**
 * \file Menu.h
 * \brief Ficheiro header da classe Menu.
 */
#ifndef SRC_MENU_H
#define SRC_MENU_H

#include "ReadFiles.h"
#include "LogisticaDeTurmas.h"
#include "TrocaDeTurmas.h"
#include "ListingBasedOnOcupation.h"
#include "PedidoDeTrocaDeTurmas.h"
#include "Aula.h"
#include "Estudante.h"
using namespace std;

/**
 * \class Menu
 *  \brief Classe que efetua o display dos menus e recebe inputs do utilizador.
 */

class Menu {

public:
    //Menu();
    /**
    *   \brief Funcão que exibe o menu Contagem
    */
    static void showMenuOccupation();// Mostra numero de pessoas numa determinada turma numa determinada UC

    /**
    *   \brief Função que exibe o Menu Horario
    */

    static void showMenuHorario(); // mostra o horário de um determinado aluno

    /**
    *   \brief Função que exibe o Menu Turma
    */

    static void showMenuTurma(); // mostra determinada turma

    /**
    *   \brief Função que exibe o Menu UC
    */

    static void showMenuUnidadeCurricular();// mostra alunos inscritos em determinada Uc

    /**
    *   \brief Função que exibe o Menu Estundante com n Uc's
    */

    static void showMenuStudentSomeUCs(); // mostra alunos com mais de n UnidadesCurriculares;

    /**
    *   \brief Função que exibe o Menu Ordenação
    */

    static void showMenuOccupationOrder(); // Informa a ordem

    /**
    *   \brief Função que exibe o Menu principal
    */
    int showGeneralMenu();
};


#endif //SRC_MENU_H