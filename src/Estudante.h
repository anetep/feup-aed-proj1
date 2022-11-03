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
    int studentCode;
    string studentName;
    list<Turma> horario;
public:

    Estudante();

    Estudante(const int &studentCode,const string &studentName);

    Estudante(const int &studentCode,const string &studentName, list<Turma> &turma);

    int getStudentCode() const;

    string getStudentName() const;

    list<Turma> getStudentSchedule() const;

    void setStudentName(string name);

    void setStudentCode(int code);
};

#endif //SRC_ESTUDANTE_H
