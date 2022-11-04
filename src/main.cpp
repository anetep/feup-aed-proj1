#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"
#include "TrocaDeTurmas.h"
#include "ListingBasedOnOcupation.h"

//TODO função para verificar estudantes inscritos em todas as turmas

//TODO função para imprimir ocupação de todas as turmas/uc
//TODO função para imprimir o número de inscritos em todas as turmas

//TODO Corrigir o remove para remover o estudante da turma/uc ao mesmo tempo
// TODO corrigir o print das ocupações para ficar mais bonitinho



int main() {
    ReadFiles o;
    vector<Estudante> estudantes = o.readStudentsFile();

    ListingBasedOnOcupation r;
    r.printClassOcupation(estudantes, "3LEIC07");

    TrocaDeTurmas h;
    h.addStudentToAClass(201071357, "L.EIC022", "3LEIC07", estudantes);

    r.printClassOcupation(estudantes, "3LEIC07");

    return 0;
}
