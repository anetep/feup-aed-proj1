//
// Created by anete on 03/11/2022.
//

#include "ListingBasedOnOcupation.h"
//compara por classes
// retorna pair com nome do estudante e o código da uc a que ele está naquela cadeira
vector <pair<string, string>> ListingBasedOnOcupation::CompareClassOcupation(vector<Estudante> &estudantes, string classD){
    vector<pair<string, string>> studOcup;
    for (const auto &st: estudantes){
        for (const auto &turm: st.getStudentSchedule()){
            if (turm.getClassCode() == classD){
                pair<string, string> aux = {st.getStudentName(), turm.getUcCode()};
                studOcup.push_back(aux);
            }
        }
    }
    return studOcup;
}

void ListingBasedOnOcupation::PrintClassOcupation(string classD){
    ReadFiles o;
    vector<Estudante> s = o.readStudentsFile();
    vector<Estudante> cleanS = o.joinStudentClases(s);

    cout << "--------------------" << endl;
    cout << "Ocupantes da turma: " << classD << endl;
    cout << "--------------------" << endl;
    vector<pair<string, string>> res = CompareClassOcupation(cleanS, classD);
    for (auto r: res){
        cout << r.first << " na unidade curricular " << r.second << endl;
    }
    cout << "===================" << endl;
}

//compara por classes
// retorna pair com nome do estudante e o cod da turma a que ele está naquela cadeira
vector <pair<string, string>> ListingBasedOnOcupation::CompareUcOcupation(vector<Estudante> &estudantes, string uc){
    vector<pair<string, string>> studOcup;
    for (const auto &st: estudantes){
        for (const auto &turm: st.getStudentSchedule()){
            if (turm.getUcCode() == uc){
                pair<string, string> aux = {st.getStudentName(), turm.getClassCode()};
                studOcup.push_back(aux);
            }
        }
    }
    return studOcup;
}

void ListingBasedOnOcupation::PrintUcOcupation(string uc){
    ReadFiles o;
    vector<Estudante> s = o.readStudentsFile();
    vector<Estudante> cleanS = o.joinStudentClases(s);

    cout << "--------------------" << endl;
    cout << "Alunos inscritos na cadeira: " << uc << endl;
    cout << "--------------------" << endl;
    vector<pair<string, string>> res = CompareUcOcupation(cleanS, uc);
    for (auto r: res){
        cout << r.first << " na turma " << r.second << endl;
    }
    cout << "===================" << endl;
}