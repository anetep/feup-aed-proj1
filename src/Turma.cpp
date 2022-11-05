//
// Created by anete on 20/10/2022.
//

#include "Turma.h"

Turma::Turma(){
    this->ucCode = "";
    this->classCode = "";
}

Turma::Turma (const string &ucode, const string &ccode){
    this->ucCode = ucode;
    this->classCode = ccode;
}

string Turma::getUcCode() const{
    return ucCode;
}


string Turma::getClassCode() const{
    return classCode;
}

string Turma::setUcCode(string ucode){
    this->ucCode = ucode;
}

string Turma::setClassCode(string ccode){
    this->classCode = ccode;
}
