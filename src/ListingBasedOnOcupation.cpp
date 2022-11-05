//
// Created by anete on 03/11/2022.
//

#include "ListingBasedOnOcupation.h"
//compara por classes
// retorna pair com nome do estudante e o código da uc a que ele está naquela cadeira
vector <pair<string, string>> ListingBasedOnOcupation::compareStudentsInClass(string classCode, vector<Estudante> &students){
    vector<pair<string, string>> studOcup;
    for (const auto &st: students){
        for (const auto &turm: st.getStudentSchedule()){
            if (turm.getClassCode() == classCode){
                pair<string, string> aux = {st.getStudentName(), turm.getUcCode()};
                studOcup.push_back(aux);
            }
        }
    }
    return studOcup;
}

//compara por classes
// retorna pair com nome do estudante e o cod da turma a que ele está naquela cadeira
vector <pair<string, string>> ListingBasedOnOcupation::compareStudentsInUc(string ucCode, vector<Estudante> &students){
    vector<pair<string, string>> studOcup;
    for (const auto &st: students){
        for (const auto &turm: st.getStudentSchedule()){
            if (turm.getUcCode() == ucCode){
                pair<string, string> aux = {st.getStudentName(), turm.getClassCode()};
                studOcup.push_back(aux);
            }
        }
    }
    return studOcup;
}

void ListingBasedOnOcupation::printStudentsInClass(string classCode, vector<Estudante> &students){

    cout << "--------------------" << endl;
    cout << "Ocupantes da turma: " << classCode << endl;
    cout << "--------------------" << endl;
    vector<pair<string, string>> res = compareStudentsInClass(classCode, students);
    for (auto r: res){
        cout << r.first << " na unidade curricular " << r.second << endl;
    }
    cout << "===================" << endl;
}


void ListingBasedOnOcupation::printStudentsInUc(string ucCode, vector<Estudante> &students){
    cout << "--------------------" << endl;
    cout << "Alunos inscritos na cadeira: " << ucCode << endl;
    cout << "--------------------" << endl;
    vector<pair<string, string>> res = compareStudentsInUc(ucCode, students);
    for (auto r: res){
        cout << r.first << " na turma " << r.second << endl;
    }
    cout << "===================" << endl;
}