//
// Created by anete on 22/10/2022.
//

#include "LogisticaDeTurmas.h"

// ==============================================================
// Funções para auxiliar no sort não definidas no .h

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

// ============================= Retornar o Horário de um estudante =================================

Estudante LogisticaDeTurmas::getStudentWithCodeX(int studentCode, vector<Estudante> &students){
    Estudante res;
    for (auto &st : students){
        if (st.getStudentCode() == studentCode) return st;
    }
    cout << "Não existe estudante com esse número" << endl;
    return res; // se não houver retorna estudante vazio
}

Estudante LogisticaDeTurmas::getStudentFromFile(int studentCode){
    ReadFiles o;
    vector<Estudante> allSt = o.readStudentsFile();

    for (auto &st : allSt){
        if (st.getStudentCode() == studentCode) return st;
    }
    Estudante a;
    // se não existir retorna estudante vazio
    return a;
}

vector<Aula> LogisticaDeTurmas::turnStudentClassesToLessons(Estudante &student){
    ReadFiles o;
    list<Turma> turmas = student.getStudentSchedule();
    vector<Aula> allClasses = o.readClassesFile();
    vector<Aula> schedule;

    for (auto &t : turmas){
        for (auto &aul : allClasses){
            if ((t.getClassCode() == aul.getClassCode()) && (t.getUcCode() == aul.getUcCode())){
                schedule.push_back(aul);
            }
        }
    }
    return schedule;
}

string LogisticaDeTurmas::convertFloatToTime(float hour){
    int haux = trunc(hour);
    string h = to_string(haux);
    int maux = trunc(60 * (hour - (unsigned int) hour));
    string m = to_string(maux);

    if (h.length() <= 1) h = "0" + h; //para ficar 02 em vez de 2
    if (m.length() <= 1) m = "0" + m;

    string res = h + ":" + m;
    return res;
}

//TODO corrigir o getStudentFromFile para receber o vector de estudantes em vez de ir buscar no ficheiro
void LogisticaDeTurmas::printStudentSchedule(int studentCode, vector<Estudante> &students){
    Estudante stud = getStudentWithCodeX(studentCode, students);
    vector<Aula> aulasDoLudo = turnStudentClassesToLessons(stud);

    cout << "======================   Horario do/a " << stud.getStudentName() << "  ===========================" << endl;
    for (auto &al: aulasDoLudo){
        cout << "Unidade Curricular: " << al.getUcCode() << "             Turma: " << al.getClassCode() << endl;
        cout << "Dia da semana: " << al.getWeekday() << endl;
        cout << "Tipo de Aula: " << al.getTypeOfClass() << endl;
        cout << "Hora de Inicio: " << convertFloatToTime(al.getStartHour()) << "              Hora de fim: " << al.getEndHour() << endl;
        cout << "Duracao: " << al.getDuration() << endl;
        cout << " ------------------------------- " << endl;
    }
}



