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

int main() {
    // ocupação de turmas
    // recebe uma turma e dá print dos alunos
    // TODO arrumar estudantes de forma a q as suas turmas ficam na lista
    // TODO ver casos em que nome repete.

    //ListingBasedOnOcupation a;
    //a.PrintClassOcupation();

    /*ReadFiles o;
    vector<Estudante> s = o.readStudentsFile();
    vector<Estudante> cleanS = o.joinStudentClases(s);


    for (auto &st : cleanS){
        cout << "Num: " << st.getStudentCode() << "     Name:" << st.getStudentName() << endl;
        cout << "--------" << endl;

        for(auto &t : st.getStudentSchedule()){
            cout << "Uc: " <<  t.getUcCode() << "     Class: " << t.getClassCode() << endl;
        }
        cout << "============================" << endl;
    }*/

    ListingBasedOnOcupation o;
    o.PrintClassOcupation("3LEIC08");


    return 0;
}
