//
// Created by anete on 20/10/2022.
*/

#include "Estudante.h"

string Estudante::getStudentCode() {return studentCode;}
string Estudante::getStudentName() {return studentName;}

void Estudante::setStudentName(string name) {this->studentName = name;}
void Estudante::setStudentCode(int code) {this->studentCode = code;}