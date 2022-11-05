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






int main() {

    ReadFiles o;
    vector<Estudante> students = o.readStudentsFile();

    ListingBasedOnOcupation s;
    s.printStudentsInClass("1LEIC08", students);

    return 0;
}
