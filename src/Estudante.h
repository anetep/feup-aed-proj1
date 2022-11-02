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


using namespace std;

class Estudante {

private:
    int studentCode;
    string studentName;
public:

    Estudante();

    Estudante(const int &studentCode,const string &studentName);

    int getStudentCode();

    string getStudentName();

    void setStudentName(string name);

    void setStudentCode(int code);
};

#endif //SRC_ESTUDANTE_H
