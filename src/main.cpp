#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>


int main() {

    Estudante student;
    ReadFiles r;
    vector<pair<int, string>> s = r.readStudentsFile();

    student.addVectorOfStudents(s);

    student.printAllStudents();


    return 0;
}
