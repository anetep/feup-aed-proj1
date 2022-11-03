#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"
#include "ListingBasedOnOcupation.h"

//TODO depois mudar isso tudo para associar a turma a com uc e class a uma aula

int main() {
    // ocupação de ucs
    // recebe uma uc e dá print dos alunos inscritos

    ListingBasedOnOcupation o;
    o.PrintUcOcupation("L.EIC025");


    return 0;
}
