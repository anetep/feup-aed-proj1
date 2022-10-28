//
// Created by worker on 28/10/2022.
//

#ifndef SRC_SCHEDULE_H
#define SRC_SCHEDULE_H

#include "Aula.h"
#include "BinarySearchTree.h"
#include "GestaoDeTransferencia.h"
#include "LogisticaDeTurmas.h"
#include "Turma.h"
#include "Estudante.h"
#include <list>

class Schedule{
private:
    list<Estudante> Estudantes;
    list<Turma> Turmas;
    list<Aula> Aulas;

public:
    list<Estudante> getEstudantes();

    list<Turma> getTurmas();

    list<Aula> getAulas();


    // void setEstudante()  , void setTurma()  ???

    void readEstudantefiles();


    void readTurmafiles();


    void readAulafiles();


    void readClassDuration();

    void readClassType();


    void readStartHour();




};


#endif //SRC_SCHEDULE_H
