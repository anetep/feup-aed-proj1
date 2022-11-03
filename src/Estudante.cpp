//
// Created by anete on 01/11/2022.
//

#include "Estudante.h"
using namespace std;

Estudante::Estudante(){
    this->studentCode = 0;
    this->studentName = "";
    this->horario = list<Turma> (); // acho que é lista vazia
}


Estudante::Estudante(const int &sc,const string &sn){
    this->studentCode = sc;
    this->studentName = sn;
}

Estudante::Estudante(const int &sc,const string &sn, list<Turma> &hor){
    this->studentCode = sc;
    this->studentName = sn;
    this->horario = hor;
}

int Estudante::getStudentCode() const {return studentCode;}
string Estudante::getStudentName() const{return studentName;}

list<Turma> Estudante::getStudentSchedule() const{
    return horario;
}

void Estudante::setStudentName(const string name) {this->studentName = name;}
void Estudante::setStudentCode(int code) {this->studentCode = code;}





