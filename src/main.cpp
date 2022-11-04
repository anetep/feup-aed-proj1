#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"
#include "ListingBasedOnOcupation.h"



int main() {
    // horário de estudante
    // recebe estudante
    // compara as turmas e ucs do est com turmas e ucs do ficheiro de aulas
    ReadFiles o;
    vector<Estudante> orig = o.readStudentsFile();
    LogisticaDeTurmas a;

    cout << "==== antes ===" << endl;
    a.printStudentRemovedFromUc(1, "L.EIC025", orig);


    cout << "==== depois de eliminar ===" << endl;
    a.printStudentRemovedFromUc(202071557, "L.EIC025", orig);


    return 0;
}
