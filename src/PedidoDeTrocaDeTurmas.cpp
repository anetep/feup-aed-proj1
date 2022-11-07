//
// Created by anete on 06/11/2022.
//

#include "PedidoDeTrocaDeTurmas.h"

PedidoDeTrocaDeTurmas::PedidoDeTrocaDeTurmas(){
    this->studentToChangeCode = 0;
    this->oldClass = Turma();
    this->newClass = Turma();

}

PedidoDeTrocaDeTurmas::PedidoDeTrocaDeTurmas(int st, Turma oldCl, Turma newCl){
    this->studentToChangeCode = st;
    this->oldClass = oldCl;
    this->newClass = newCl;
}


int PedidoDeTrocaDeTurmas::getStudentToChangeCode() const{
    return studentToChangeCode;
}

Turma PedidoDeTrocaDeTurmas::getOldClass() const{
    return oldClass;
}

Turma PedidoDeTrocaDeTurmas::getNewClass() const{
    return newClass;
}

void PedidoDeTrocaDeTurmas::setStudentToChange(int st){
    this->studentToChangeCode = st;
}
void PedidoDeTrocaDeTurmas::setOldClass(Turma cl){
    this->oldClass = cl;
}

void PedidoDeTrocaDeTurmas::setNewClass(Turma cl){
    this->newClass = cl;
}