#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"
#include "ListingBasedOnOcupation.h"

//TODO depois mudar isso tudo para associar a turma a com uc e class a uma aula
vector<Estudante> joinStudentClases(vector <Estudante> &fromFile){
    int i = 0;
    int size = fromFile.size();

    vector<Estudante> cleanStudents;
    list<Turma> turmas;
    Estudante s;

    while (size) {
        if (fromFile[i].getStudentCode() == fromFile[i + 1].getStudentCode()) {
            turmas.push_back(fromFile[i].getStudentSchedule().front());
            size--;
            i++;
        }
        else {
            turmas.push_back(fromFile[i].getStudentSchedule().front());
            s.setStudentCode(fromFile[i].getStudentCode());
            s.setStudentName(fromFile[i].getStudentName());
            s.setStudentClasses(turmas);
            cleanStudents.push_back(s);
            turmas.clear();
            size--;
            i++;
        }
    }
    return cleanStudents;
}



int main() {
    // ocupação de turmas
    // recebe uma turma e dá print dos alunos
    // TODO arrumar estudantes de forma a q as suas turmas ficam na lista
    // TODO ver casos em que nome repete.

    //ListingBasedOnOcupation a;
    //a.PrintClassOcupation();

    ReadFiles o;
    vector<Estudante> s = o.readStudentsFile();
    vector<Estudante> cleanS = joinStudentClases(s);


    for (auto &st : cleanS){
        cout << "Name: " << st.getStudentName() << endl;
        for(auto &t : st.getStudentSchedule()){
            cout << "Uc: " <<  t.getUcCode() << "     Class: " << t.getClassCode() << endl;
        }
        cout << "============================" << endl;
    }

    return 0;
}
