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
    vector<Estudante> removeDuplicatesNums(vector<Estudante> &students);

};


#endif //SRC_LOGISTICADETURMAS_H
