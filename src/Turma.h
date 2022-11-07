//
// Created by anete on 20/10/2022.
//

/**
 * \file Turma.h
 * \brief Ficheiro header da classe Turma.
 */

#ifndef SRC_TURMA_H
#define SRC_TURMA_H

#include <iostream>
#include <list>

#include "Aula.h"


using namespace std;

class Turma {
private:
    string ucCode;
    string classCode;
public:

    /**
    * \brief Construtor da classe
    */
    Turma();
    /**
    * \brief Construtor da classe com atributos ucode, ccode. 
    * @param ucode codigo da unidade curricular
    * @param ccode codigo da turma
    */
    Turma(const string &ucode, const string &ccode);

    /**
    * @return código da unidade curricular.
    */
    string getUcCode() const;

    /**
    * @return código da turma.
    */
    string getClassCode() const;
    
    /**
    * @brief define o código da unidade curricular
    * @param  ucCode é o novo código da unidade curricular.
    */
    void setUcCode(string ucCode);

    /**
    * @brief define o codigo da turma.
    * @param classCode é o novo código da turma.
    */
    void setClassCode(string classCode);

};


#endif //SRC_TURMA_H
