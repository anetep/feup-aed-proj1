//
// Created by anete on 22/10/2022.
//

#include "LogisticaDeTurmas.h"

// ==============================================================
// Funções para auxiliar no sort

bool compareStudentsNums(Estudante &x, Estudante &y) {
    return x.getStudentCode() < y.getStudentCode();
}

bool compareClassesCode(Turma &x, Turma &y) {
    return x.getClassCode() < y.getClassCode();
}

bool compareUcsCode(Turma &x, Turma &y) {
    return x.getUcCode() < y.getUcCode();
}
// ==============================================================
// Funções para eliminar duplicados

vector<Estudante> LogisticaDeTurmas::removeDuplicatesStudentsNums(vector<Estudante> &students) {
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

vector<Turma> LogisticaDeTurmas::removeDuplicateClassCode(vector<Turma> &aulas) {
    int i = 0;
    int size = aulas.size();
    vector<Turma> newA;
    while (size) {
        if (aulas[i].getClassCode() == aulas[i + 1].getClassCode()) {
            size--;
            i++;
        }
        else {
            size--;
            newA.push_back(aulas[i]);
            i++;
        }
    }
    return newA;
}

vector<Turma> LogisticaDeTurmas::removeDuplicateUcCode(vector<Turma> &aulas) {
    int i = 0;
    int size = aulas.size();
    vector<Turma> newA;
    while (size) {
        if (aulas[i].getUcCode() == aulas[i + 1].getUcCode()) {
            size--;
            i++;
        }
        else {
            size--;
            newA.push_back(aulas[i]);
            i++;
        }
    }
    return newA;
}

// ==============================================================

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
    vector<Estudante> uniqueStudents = removeDuplicatesStudentsNums(studentFile);
    sort(uniqueStudents.begin(), uniqueStudents.end(), compareStudentsNums);


    cout << "All Students enrolled" << endl;
    cout << "---------------------------" << endl;

    // para aceder a cada turma dos estudantes
    for (auto &st : uniqueStudents){
        cout << "Number: " << st.getStudentCode() << "     " <<  "Name: " <<  st.getStudentName() << endl;
    }
}

void LogisticaDeTurmas::printAllClasses(){
    ReadFiles o;
    vector<Turma> allClasses = o.readClassesPerUcFile();

    sort(allClasses.begin(), allClasses.end(), compareClassesCode);

    cout << "All Classes available in the system" << endl;
    cout << "---------------------------" << endl;

    vector<Turma> uniqueClasses = removeDuplicateClassCode(allClasses);

    for (const auto &cl : uniqueClasses){
        cout << cl.getClassCode() << endl;
    }

}

void LogisticaDeTurmas::printAllUcs(){
    ReadFiles o;
    vector<Turma> allClasses = o.readClassesPerUcFile();

    sort(allClasses.begin(), allClasses.end(), compareUcsCode);

    cout << "All UCs available in the system" << endl;
    cout << "---------------------------" << endl;

    vector<Turma> uniqueClasses = removeDuplicateUcCode(allClasses);

    for (const auto &cl : uniqueClasses){
        cout << cl.getUcCode() << endl;
    }
}
