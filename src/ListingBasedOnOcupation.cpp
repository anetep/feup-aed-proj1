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



vector<string> ListingBasedOnOcupation::getAllUniqueUcsFromStudentsEnrolled(vector<Estudante> &students){
    vector<string> allUcs;
    for (auto &st : students){
        for (auto &turma : st.getStudentSchedule()){
            allUcs.push_back(turma.getUcCode());
        }
    }
    sort(allUcs.begin(), allUcs.end());
    allUcs.erase(unique(allUcs.begin(), allUcs.end()), allUcs.end());

    return allUcs;
}


int ListingBasedOnOcupation::getUcNumberOfStudentsSortedByUc(string ucCode, vector<Estudante> &students){
    int counter = 0;
    for (auto &st : students){
        for (auto &turma : st.getStudentSchedule()){
            if (turma.getUcCode() == ucCode){
                counter ++;
            }
        }
    }
    return counter;
}

void ListingBasedOnOcupation::printUcNumberOfStudentsSortedByUc(vector<Estudante> &students){
    vector<string> allUcs = getAllUniqueUcsFromStudentsEnrolled(students);

    cout << "========== Numero de alunos inscritos em cada UC ============" << endl;
    for (auto &uc : allUcs){
        cout << uc << " : " << getUcNumberOfStudentsSortedByUc(uc, students) << endl;
    }
}

vector<Turma> ListingBasedOnOcupation::removeDuplicateUcsAndClasses(vector<Turma> &aulas) {
    int i = 0;
    int size = aulas.size();

    // porque removeDuplicateUcsAndClasses testa duplicados adjacentes
    sort(aulas.begin(), aulas.end(), [](Turma &x, Turma &y) -> bool {return x.getUcCode() < y.getUcCode();});
    sort(aulas.begin(), aulas.end(), [](Turma &x, Turma &y) -> bool {return x.getClassCode() < y.getClassCode();});

    vector<Turma> newA;
    while (size) {
        if (aulas[i].getUcCode() == aulas[i + 1].getUcCode() && aulas[i].getClassCode() == aulas[i + 1].getClassCode()) {
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

vector<Turma> ListingBasedOnOcupation::getAllUniqueUcsAndClassesFromStudentsEnrolled(vector<Estudante> &students){
    vector<Turma> allUcsAndClasses;
    for (auto &st : students){
        for (auto &turma : st.getStudentSchedule()){
            Turma aux;
            aux.setUcCode(turma.getUcCode());
            aux.setClassCode(turma.getClassCode());
            allUcsAndClasses.push_back(aux);
        }
    }

    vector<Turma> res = removeDuplicateUcsAndClasses(allUcsAndClasses);
    return res;
}

void ListingBasedOnOcupation::printNumberOfStudentsInAllClass(vector<Estudante> &students){
    TrocaDeTurmas num;
    vector<Turma> turmas = getAllUniqueUcsAndClassesFromStudentsEnrolled(students);

    cout << "==========  Numero de alunos inscritos em cada turma (uc/class) ============" << endl;
    for (auto &parUcClass : turmas){
        cout << parUcClass.getUcCode() << "  " << parUcClass.getClassCode() << " : " << num.getClassOccupation(parUcClass.getUcCode(), parUcClass.getClassCode(), students) << endl;
    }
}