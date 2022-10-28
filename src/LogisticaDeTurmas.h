//
// Created by anete on 22/10/2022.
//

#ifndef SRC_LOGISTICADETURMAS_H
#define SRC_LOGISTICADETURMAS_H


#include "Estudante.h"
#include "Turma.h"
#include <list>



class LogisticaDeTurmas {
private:
public:
    list <Estudante> getAllStudents();
    list <Turma> getAllClasses();
    list <Aula> getStudentShedule(int studentCode);
    list <Estudante> getStudentsPerClass(string classCode);
    list <Estudante> getStudentsPerUcs(string usCode);
    list <Estudante> getStudentsInYearN(int year);
    // list <Estudante> getStudentsWithMoreThanNUcs(int n);
};


#endif //SRC_LOGISTICADETURMAS_H
