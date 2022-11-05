//
// Created by anete on 22/10/2022.
//

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

    vector<Estudante> removeDuplicatesStudentsNums(vector<Estudante> &students);
    vector<Turma> removeDuplicateClassCode(vector<Turma> &aulas);
    vector<Turma> removeDuplicateUcCode(vector<Turma> &aulas);

    void printAllStudentsOrderedByNum(vector<Estudante> students);
    void printAllClasses();
    void printAllUcs();

    Estudante getStudentWithCodeX(int studentCode, vector<Estudante> &students);
    vector<Aula> turnStudentClassesToLessons(Estudante &student);
    string convertFloatToTime(float hour);
    void printStudentSchedule(int studentCode, vector<Estudante> &students);


};


#endif //SRC_LOGISTICADETURMAS_H
