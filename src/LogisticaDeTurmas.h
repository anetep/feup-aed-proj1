//
// Created by anete on 22/10/2022.
//

/**
 * \file LogisticaDeTurmas.h
 * \brief Ficheiro header da classe LogisticaDeTurmas
 */
#ifndef SRC_LOGISTICADETURMAS_H
#define SRC_LOGISTICADETURMAS_H


#include "Estudante.h"
#include "Turma.h"
#include "ReadFiles.h"
#include "ListingBasedOnOcupation.h"
#include <cmath>
#include <list>



class LogisticaDeTurmas {
private:
public:
    /**
		  * @brief Percorre pelo vector students e verifica se existem estudantes com mesmo StudentCode, então separa os estudantes removendo suas duplicatas.
		  * @param students vector de objetos do tipo estudante (Lista de estudantes).
		  * @return Retorna um vector de tipo Estudante sem repetições de studentCode, ou seja, sem alunos duplicados com o mesmo StudentCode.
		  */
    vector<Estudante> removeDuplicatesStudentsNums(vector<Estudante> &students);
    /**
		  * @brief Percorre pelo vector aulas e verifica se existem turmas com a mesma ClassCode, então separa as turmas removendo suas duplicatas.
		  * @param aulas vector de objetos do tipo turma (Lista de turmas).
		  * @return Retorna um vector de tipo Turma sem repetições de ClassCode, ou seja, sem turmas duplicadas com a mesma ClassCode.
		  */
    vector<Turma> removeDuplicateClassCode(vector<Turma> &aulas);
    /**
		  * @brief Percorre pelo vector aulas e verifica se existem turmas com a mesma UcCode, então separa as turmas removendo suas duplicatas.
		  * @param aulas vector de objetos do tipo turma (Lista de turmas).
		  * @return Retorna um vector de tipo Turma sem repetições de UcCode, ou seja, sem turmas duplicadas com a mesma UcCode.
		  */
    vector<Turma> removeDuplicateUcCode(vector<Turma> &aulas);

    /**
		* @brief Faz print de todos os estudantes ordenados pelo seu StudentCode.
          * @param students vector de objetos do tipo estudante (Lista de estudantes).
		*/
    void printAllStudentsOrderedByNum(vector<Estudante> students);

    /**
		  * @brief Faz print de todos os códigos de turmas.
		  */
    void printAllClasses();

    /**
         * @brief Faz print de todas as UC's.
         */
    void printAllUcs();

    /**
         * @brief Busca num vector students um estudante com um StudentCode igual ao selecionado.
         * @param studentCode Número de um estudante.
         * @param students vector de objetos do tipo Estudante (Lista de estudantes).
         * @return um objeto de tipo Estudante se este tiver o mesmo studentCode que o solicitado, caso contrário retorna um estudante vazio.
         */
    Estudante getStudentWithCodeX(int studentCode, vector<Estudante> &students);

    /**
         * @param studentCode Número de um estudante.
         * @param students vector de objetos do tipo Estudante (Lista de estudantes).
         * @return um vector do tipo Aula com as aulas do estudante recebido no argumento 
         */
    vector<Aula> turnStudentClassesToLessons(Estudante &student);

    /**
         * @brief Converte um valor em float para o formato hora e minuto.
         * @param hour horário dado em float.
         * @return uma string no formato de horas e minutos.
         */
    string convertFloatToTime(float hour);

    /**
         * @brief imprime o horário do estudante com o código de estudante recebido no primeiro argumento
         * @param studentCode Número de um estudante.
         * @param students vector de objetos do tipo Estudante (Lista de estudantes).
         */
    void printStudentSchedule(int studentCode, vector<Estudante> &students);


};


#endif //SRC_LOGISTICADETURMAS_H
