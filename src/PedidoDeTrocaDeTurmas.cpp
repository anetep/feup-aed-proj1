//
// Created by anete on 06/11/2022.
//

#include "PedidoDeTrocaDeTurmas.h"

PedidoDeTrocaDeTurmas::PedidoDeTrocaDeTurmas(){
    this->studentToChange = Estudante();
    this->oldClass = Turma();
    this->newClass = Turma();

}

PedidoDeTrocaDeTurmas::PedidoDeTrocaDeTurmas(Estudante st, Turma oldCl, Turma newCl){
    this->studentToChange = st;
    this->oldClass = oldCl;
    this->newClass = newCl;
}

// Para alterar um conjunto de turmas/UCs.
/*PedidoDeTrocaDeTurmas::PedidoDeTrocaDeTurmas(Estudante st, Turma oldCl, Turma newCl, list<Turma> classes){
    this->studentToChange = st;
    this->oldClass = oldCl;
    this->newClass = newCl;
    this->classesToChange = classes;
}*/


Estudante PedidoDeTrocaDeTurmas::getStudentToChange() const{
    return studentToChange;
}

Turma PedidoDeTrocaDeTurmas::getOldClass() const{
    return oldClass;
}

Turma PedidoDeTrocaDeTurmas::getNewClass() const{
    return newClass;
}

void PedidoDeTrocaDeTurmas::setStudentToChange(Estudante st){
    this->studentToChange = st;
}
void PedidoDeTrocaDeTurmas::setOldClass(Turma cl){
    this->oldClass = cl;
}

void PedidoDeTrocaDeTurmas::setNewClass(Turma cl){
    this->newClass = cl;
}