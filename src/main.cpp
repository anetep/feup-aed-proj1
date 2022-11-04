#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"
#include "ListingBasedOnOcupation.h"

//TODO associar turma e uc com aula do estudante

vector<Estudante> removeStudentFromClass(int studentCode, string classCode, vector<Estudante> &original){
    vector<Estudante> novo;
    list<Turma> newTurmas;

    for (auto &st : original){
        for (auto &turma : st.getStudentSchedule()){
            if (st.getStudentCode() == studentCode && turma.getClassCode() == classCode){}
            else newTurmas.push_back(turma);
        }
        st.setStudentClasses(newTurmas);
        novo.push_back(st);
        newTurmas.clear();
    }
    return novo;
}

vector<Estudante> removeStudentFromUc(int studentCode, string ucCode, vector<Estudante> &original){
    vector<Estudante> novo;
    list<Turma> newTurmas;

    for (auto &st : original){
        for (auto &turma : st.getStudentSchedule()){
            if (st.getStudentCode() == studentCode && turma.getUcCode() == ucCode){}
            else newTurmas.push_back(turma);
        }
        st.setStudentClasses(newTurmas);
        novo.push_back(st);
        newTurmas.clear();
    }
    return novo;
}


int main() {
    // horário de estudante
    // recebe estudante
    // compara as turmas e ucs do est com turmas e ucs do ficheiro de aulas
    ReadFiles o;
    vector<Estudante> orig = o.readStudentsFile();

    cout << "==== antes ===" << endl;
    ListingBasedOnOcupation r;
    r.PrintUcOcupation(orig, "L.EIC025");

    cout << "==== depois de eliminar ===" << endl;
    vector<Estudante> novo = removeStudentFromUc(202071557, "L.EIC025", orig);
    r.PrintUcOcupation(novo,"L.EIC025");

    return 0;
}
