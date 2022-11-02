#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>


int main() {

    Aula aula("1leic", "segunda", 10.5, 1, "TP");

    cout <<  "codigo: " << aula.getUcCode()  << endl;
    cout <<  "duracao: " << aula.getDuration()  << endl;

    return 0;
}
