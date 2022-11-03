#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>


int main() {

    ReadFiles o;
    vector<Aula> h = o.readClassesFile();

    for (auto x : h){
        cout << x.getWeekday() << endl;
    }


    return 0;
}
