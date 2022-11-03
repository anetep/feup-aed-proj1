#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>


int main() {

    ReadFiles o;
    vector<Turma> h = o.readClassesPerUcFile();

    for (auto x : h){
        cout << x.getClassCode() << endl;
    }

    return 0;
}
