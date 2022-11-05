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

// TODO corrigir o print das ocupações para ficar mais bonitinho






int main() {

    ReadFiles o;
    vector<Estudante> students = o.readStudentsFile();

    ListingBasedOnOcupation s;
    s.printNumberOfStudentsInAllClass(students);

    return 0;
}
