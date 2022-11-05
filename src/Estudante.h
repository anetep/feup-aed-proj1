//
// Created by anete on 01/11/2022.
//


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
     * Código do estudante.
     */
    int studentCode;
    /**
     * Nome do estudante.
     */
    string studentName;
    /**
     * Lista de turmas.
     */
    list<Turma> turmas;
public:

    Estudante();
    Estudante(const int &studentCode,const string &studentName);
    Estudante(const int &studentCode,const string &studentName, list<Turma> &turma);
    /**
		  * Construtores da classe.
		  */
    int getStudentCode() const;
    /**
		  * @return código do estudante.
		  */
    string getStudentName() const;
    /**
		  * @return nome do estudante.
		  */
    list<Turma> getStudentSchedule() const;
    /**
		  * @return turmas do estudante.
		  */
    void setStudentName(string name);
    /**
		  * Define qual o nome associado ao estudante.
          * @param name:Novo nome do estudante.
		  */
    void setStudentCode(int code);
    /**
		  * Define qual o código associado ao estudante.
          * @param code:Novo código do estudante.
		  */
    void setStudentClasses(list<Turma> turmas);
    /**
		  * Define qual o schedule associado ao estudante.
          * @param turmas:Novo schedule de turmas do estudante.
		  */
};

#endif //SRC_ESTUDANTE_H
