#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include <cmath>
#include "LogisticaDeTurmas.h"
#include "ListingBasedOnOcupation.h"

//TODO associar turma e uc com aula do estudante

Estudante getStudentFromFile(int studentCode){
    ReadFiles o;
    vector<Estudante> allSt = o.readStudentsFile();

    for (auto &st : allSt){
        if (st.getStudentCode() == studentCode) return st;
    }
    Estudante a;
    // se não existir retorna estudante vazio
    return a;
}

vector<Aula> turnStudentClassesToLessons(Estudante &student){
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

string convertFloatToTime(float hour){
    int haux = trunc(hour);
    string h = to_string(haux);
    int maux = trunc(60 * (hour - (unsigned int) hour));
    string m = to_string(maux);

    if (h.length() <= 1) h = "0" + h; //para ficar 02 em vez de 2
    if (m.length() <= 1) m = "0" + m;

    string res = h + ":" + m;
    return res;
}

int main() {
    // horário de estudante
    // recebe estudante
    // compara as turmas e ucs do est com turmas e ucs do ficheiro de aulas


    Estudante ludo = getStudentFromFile(202071557);
    vector<Aula> aulasDoLudo = turnStudentClassesToLessons(ludo);

    cout << "======================   Horario do/a " << ludo.getStudentName() << "  ===========================" << endl;
    for (auto &al: aulasDoLudo){
        cout << "Unidade Curricular: " << al.getUcCode() << "             Turma: " << al.getClassCode() << endl;
        cout << "Dia da semana: " << al.getWeekday() << endl;
        cout << "Tipo de Aula: " << al.getTypeOfClass() << endl;
        cout << "Hora de Inicio: " << convertFloatToTime(al.getStartHour()) << "              Hora de fim: " << al.getEndHour() << endl;
        cout << "Duracao: " << al.getDuration() << endl;
        cout << " ------------------------------- " << endl;
    }

    cout << trunc((unsigned int) 8) << endl;

    return 0;
}
