//
// Created by worker on 28/10/2022.
//

#include "BinarySearchTree.h"
#include "Schedule.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>

Schedule::Schedule() {
    readAulafiles();
    readClassDuration();
    readClassType();
    readEstudantefiles();
    readStartHour();
    readTurmafiles();
}
list<Aula>Schedule::getAulas() {
    return Aulas;
}

list<Estudante>Schedule::getEstudantes() {
    return Estudantes;
}

list<Turma>Schedule::getTurmas() {
    return Turmas;
}
void Schedule::getAulas() {
    ifstream f (FICHEIRO_CLASSES); // nome do ficheiro??


    if (f.fail()){
        cerr<< "Não existe nenhum ficheiro com UC de nome;"
    }
}
