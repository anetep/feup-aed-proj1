//
// Created by anete on 01/11/2022.
//

#include "Estudante.h"
using namespace std;

Estudante::Estudante(){
    this->studentCode = 0;
    this->studentName = "";
}


Estudante::Estudante(const int &sc,const string &sn){
    this->studentCode = sc;
    this->studentName = sn;
}

int Estudante::getStudentCode() {return studentCode;}
string Estudante::getStudentName() {return studentName;}

void Estudante::setStudentName(string name) {this->studentName = name;}
void Estudante::setStudentCode(int code) {this->studentCode = code;}





