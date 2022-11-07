//
// Created by anete on 01/11/2022.
//
/**
 * \file Estudante.h
 * \brief Ficheiro header da classe Estudante
 */

#ifndef SRC_ESTUDANTE_H
#define SRC_ESTUDANTE_H

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include "Turma.h"


using namespace std;

class Estudante {
private:
    /**
     * @brief Código do estudante.
     */
    int studentCode;
    /**
     * @brief Nome do estudante.
     */
    string studentName;
    /**
     * @brief Lista de turmas do estudante.
     */
    list<Turma> turmas;
public:
    /**
		  * @brief Construtores da classe.
		  */
    Estudante();
    /**
          * @brief Construtores da classe com argumentos studentCode e StudentName.
          * @param studentCode Código do estudante
          * @param studentName Nome do estudante
		  */
    Estudante(const int &studentCode,const string &studentName);
    /**
		  * @brief Construtores da classe com argumentos studentCode, studentName e turma.
          * @param studentCode Código do estudante
          * @param studentName Nome do estudante
          * @param turma turmas a que o estudante pertence
		  */
    Estudante(const int &studentCode,const string &studentName, list<Turma> &turma);

    /**
		  * @return código do estudante.
		  */
    int getStudentCode() const;
    
    /**
		  * @return nome do estudante.
		  */
    string getStudentName() const;
    
    /**
		  * @return turmas do estudante.
		  */
    list<Turma> getStudentSchedule() const;
    
    /**
		  * @brief define qual o nome associado ao estudante.
          * @param name Novo nome do estudante.
		  */
    void setStudentName(string name);
    /**
		  * @brief Define qual o código associado ao estudante.
          * @param code Novo código do estudante.
		  */
    void setStudentCode(int code);
    /**
		  * @brief Define as ucs/turmas do estudante.
          * @param turmas Novas ucs/turmas do estudante.
		  */
    void setStudentClasses(list<Turma> turmas);
};

#endif //SRC_ESTUDANTE_H
