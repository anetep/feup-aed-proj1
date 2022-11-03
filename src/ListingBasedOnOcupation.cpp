//
// Created by anete on 03/11/2022.
//

#include "ListingBasedOnOcupation.h"

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

void ListingBasedOnOcupation::PrintClassOcupation(){

    ReadFiles o;
    vector<Estudante> s = o.readStudentsFile();
    vector<Estudante> cleanS = o.joinStudentClases(s);

    cout << "turma: 3LEIC08" << endl; // anete e carminho
    vector<pair<string, string>> res = CompareClassOcupation(cleanS, "3LEIC08");
    for (auto r: res){
        cout << r.first << " na unidade curricular " << r.second << endl;
    }
    cout << "===================" << endl;

    cout << "turma: 1LEIC08" << endl; // gisela e carminho
    vector<pair<string, string>> res2 = CompareClassOcupation(cleanS, "1LEIC08");
    for (auto r: res2){
        cout << r.first << " na unidade curricular " << r.second << endl;
    }
    cout << "===================" << endl;

    cout << "turma: 1LEIC05" << endl; // iara
    vector<pair<string, string>> res3 = CompareClassOcupation(cleanS, "1LEIC05");
    for (auto r: res3){
        cout << r.first << " na unidade curricular " << r.second << endl;
    }
    cout << "===================" << endl;
}