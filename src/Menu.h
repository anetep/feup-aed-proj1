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
#include <queue>
using namespace std;

/**
 * \class Menu
 *  \brief Classe que efetua o display dos menus e recebe inputs do utilizador.
 */

class Menu {

public:
    //Menu();
    /**
    *   \brief Funcão que exibe o menu Contagem que vai imprimir o número de estudantes inscritos em todas as ucs, em todas as turmas ou em todos os anos
    */
    static void showMenuOccupation();// Mostra numero de pessoas numa determinada turma numa determinada UC

    /**
    *   \brief Função que exibe o Menu Horario que vai imprimir o horário de um estudante com um código de estudante escolhido pelo user
    */
    static void showMenuHorario(); // mostra o horário de um determinado aluno

    /**
    *   \brief Função que exibe o Menu Turma que vai imprimir o nome dos estudantes inscritos numa turma escolhida pelo user
    */
    static void showMenuTurma(); // mostra determinada turma

    /**
    *   \brief Função que exibe o Menu UC que vai imprimir o nome dos estudantes inscritos numa uc escolhida pelo user
    */
    static void showMenuUnidadeCurricular();// mostra alunos inscritos em determinada Uc

    /**
    *   \brief Função que exibe o Menu Estundante com n Uc's que vai imprimir o número de estudantes com mais do qque N unidades curriculares 
    */
    static void showMenuStudentSomeUCs(); // mostra alunos com mais de n UnidadesCurriculares;


    /**
    *   \brief Função que exibe o Menu para remover, adicionar ou trocar de turmas
    */
    void showMenuChangeOfClasses();

    /**
    *   \brief Função que exibe o Menu principal
    */
    void showGeneralMenu();

};


#endif //SRC_MENU_H