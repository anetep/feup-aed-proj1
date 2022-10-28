//
// Created by anete on 20/10/2022.
//

#ifndef SRC_ESTUDANTE_H
#define SRC_ESTUDANTE_H

#include <string>
#include <iostream>

using namespace std;

class Estudante {

private:
    int studentCode;
    string studentName;

public:

    Estudante();

    Estudante(int studentCode, string studentName);

    string getStudentCode();
    string getStudentName();

    void setStudentName(string name);
    void setStudentCode(int code);
};


#endif //SRC_ESTUDANTE_H
