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
    vector <pair<int, string>> allStudents;

public:

    //Estudante();

    //Estudante(int studentCode, string studentName);

    int getStudentCode();
    string getStudentName();

    void setStudentName(string name);

    void setStudentCode(int code);

    void addNewStudent(int &code, string &name);

    void addVectorOfStudents(vector<pair<int, string>> &lista);

    vector<pair<int, string>> getAllStudents();

    void printAllStudents();

    vector<pair<int, string>> sortStudentsByNum();

    vector<pair<int, string>> sortStudentsByName();

    vector<pair<int, string>> removeDuplicates(vector<pair<int, string>> &st);

};

#endif //SRC_ESTUDANTE_H
