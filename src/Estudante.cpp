//
// Created by anete on 01/11/2022.
//

#include "Estudante.h"
using namespace std;

int Estudante::getStudentCode() {return studentCode;}
string Estudante::getStudentName() {return studentName;}

void Estudante::setStudentName(string name) {this->studentName = name;}
void Estudante::setStudentCode(int code) {this->studentCode = code;}

void Estudante::addNewStudent(int &code, string &name) {
    pair <int, string> student = make_pair(code, name);
    allStudents.push_back(student);
}

void Estudante::addVectorOfStudents(vector<pair<int, string>> &lista){
    removeDuplicates(lista);
    for (const auto& pair : lista){
        allStudents.push_back(pair);
    }
}


void Estudante::printAllStudents(){
    for (const auto& pair : allStudents){
        cout << "Nome: " << pair.second << " -- Nr: " << pair.first << endl;
    }
}

vector<pair<int, string>> Estudante::getAllStudents(){
    return allStudents;
}


vector<pair<int, string>> Estudante::sortStudentsByNum(){
    sort(allStudents.begin(), allStudents.end());
    return allStudents;
}

//Only an auxiliar function to help sort the students by name
bool compareStudentsNames(pair<int, string> &x, pair<int, string> &y) {
    return x.second < y.second;
}

vector<pair<int, string>> Estudante::sortStudentsByName(){
    sort(allStudents.begin(), allStudents.end(), compareStudentsNames);
    return allStudents;
}

vector<pair<int, string>> Estudante::removeDuplicates(vector<pair<int, string>> &st){
    set<pair<int, string>> unique;
    for (const auto& pair : st){unique.insert(pair);}
    st.clear();
    for (const auto& pair : unique){st.push_back(pair);}
    return st;
}


