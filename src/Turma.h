//
// Created by anete on 20/10/2022.
//

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
    //int classCapacity;
public:

    Turma();

    Turma(const string &ucode, const string &ccode);

    string getUcCode() const;

    string getClassCode() const;

    //int getClassCapacity() const;

};


#endif //SRC_TURMA_H
