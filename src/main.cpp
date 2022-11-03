#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>


int main() {

    ReadFiles o;
    vector<Estudante> h = o.readStudentsFile();

    // para aceder a cada turma dos estudantes
    for (auto x : h){
        for (auto ls : x.getStudentSchedule()){
            cout << ls.getClassCode() << endl;
        }
    }

    return 0;
}
