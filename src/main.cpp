#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"

vector<Estudante> removeDuplicatesNums(vector<Estudante> &students) {
    int i = 0;
    int size = students.size();

    vector<Estudante> newSt;

    while (size-1) {
        if (students[i].getStudentCode() == students[i + 1].getStudentCode()) {
            size--;
            i++;
        }
        else {
            newSt.push_back(students[i]);
            i++;
        }
    }
    return newSt;
}

int main() {

    //LogisticaDeTurmas l;
    //l.printAllStudentsOrderedByNum();

    Estudante a(202071557, "Ludovico");
    Estudante b(202071557, "Ludovico");
    Estudante c(202071557, "Ludovico");
    Estudante d(202031607, "Gisela");
    Estudante e(202031607, "Gisela");
    Estudante f(202025232, "Iara");

    vector<Estudante> teste;
    teste.push_back(a);
    teste.push_back(b);
    teste.push_back(c);
    teste.push_back(d);
    teste.push_back(e);
    teste.push_back(f);

    vector<Estudante> testeFiltered = removeDuplicatesNums(teste);


    for (auto &c : testeFiltered){
        cout << c.getStudentName() << endl;
    }

    return 0;
}
