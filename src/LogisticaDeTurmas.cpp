//
// Created by anete on 22/10/2022.
//

#include "LogisticaDeTurmas.h"


bool compareStudentsNums(Estudante &x, Estudante &y) {
    return x.getStudentCode() < y.getStudentCode();
}

vector<Estudante> LogisticaDeTurmas::removeDuplicatesNums(vector<Estudante> &students) {
    int i = 0;
    int size = students.size();

    vector<Estudante> newSt;

    while (size) {
        if (students[i].getStudentCode() == students[i + 1].getStudentCode()) {
            size--;
            i++;
        }
        else {
            size--;
            newSt.push_back(students[i]);
            i++;
        }
    }
    return newSt;
}

void LogisticaDeTurmas::printAllStudentsOrderedByNum(){
    ReadFiles o;
    vector<Estudante> studentFile = o.readStudentsFile();
    vector<Estudante> newAllStudents;  // novo vetor de estudantes só com num e nome

    //fica só o estudante e o seu número
    for (const auto &st : studentFile) {
        Estudante s(st.getStudentCode(), st.getStudentName());
        newAllStudents.push_back(s);
    }

    //fazer sort para aparecerem por ordem do nome
    vector<Estudante> uniqueStudents = removeDuplicatesNums(studentFile);
    sort(uniqueStudents.begin(), uniqueStudents.end(), compareStudentsNums);


    cout << "All Students enrolled" << endl;
    cout << "---------------------------" << endl;

    // para aceder a cada turma dos estudantes
    for (auto &st : uniqueStudents){
        cout << "Number: " << st.getStudentCode() << "     " <<  "Name: " <<  st.getStudentName() << endl;
    }

}
