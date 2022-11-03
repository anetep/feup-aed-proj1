//
// Created by anete on 22/10/2022.
//

#ifndef SRC_LOGISTICADETURMAS_H
#define SRC_LOGISTICADETURMAS_H


#include "Estudante.h"
#include "Turma.h"
#include "ReadFiles.h"
#include <list>



class LogisticaDeTurmas {
private:
public:
    void printAllStudentsOrderedByNum();
    void printAllClasses();
    void printAllUcs();

    vector<Estudante> removeDuplicatesStudentsNums(vector<Estudante> &students);

    vector<Turma> removeDuplicateClassCode(vector<Turma> &aulas);


    };


#endif //SRC_LOGISTICADETURMAS_H
