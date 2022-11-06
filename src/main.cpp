#include <iostream>
#include <vector>
#include <queue>

#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"
#include "TrocaDeTurmas.h"
#include "ListingBasedOnOcupation.h"
#include "PedidoDeTrocaDeTurmas.h"




int main() {

    ReadFiles o;
    vector<Estudante> students = o.readStudentsFile();

    ListingBasedOnOcupation l;
    l.printNumberOfStudentsPerYear(students);

    return 0;
}
