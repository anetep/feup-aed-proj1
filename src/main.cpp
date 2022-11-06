#include <iostream>
#include <vector>
#include <queue>

#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"
#include "TrocaDeTurmas.h"
#include "ListingBasedOnOcupation.h"
#include "PedidoDeTrocaDeTurmas.h"


// não recebe por refêrencia para não mudar o original
// retorna true se o estudante pode trocar as turmas
bool verifyIfStudentCanChangeClass(int studentCode, string oldUc, string oldClass, string newUc, string newClass, vector<Estudante> students){
    TrocaDeTurmas t;
    vector<Estudante> oldUcAndClassRemoved = t.removeStudentFromUcAndClass(studentCode, oldUc, oldClass, students);

    if (t.getClassOccupation(newUc, newClass, oldUcAndClassRemoved) >= 30) return false;
    if (!t.verifyClassesEquilibrium(oldUc, oldClass, newUc, newClass, oldUcAndClassRemoved)) return false;
    if (t.verifyScheduleSobreposion(studentCode, newUc, newClass, oldUcAndClassRemoved)) return false;

    return true;
}

// retorna o estudante com as turmas trocadas ou não
vector<Estudante> changeStudentClass(int studentCode, string oldUc, string oldClass, string newUc, string newClass, vector<Estudante> &students){
    TrocaDeTurmas t;
    LogisticaDeTurmas l;

    if (!verifyIfStudentCanChangeClass(studentCode, oldUc, oldClass, newUc, newClass, students)){
        cerr << "Operacao anulada!! Nao pode mudar o estudante da turma " << oldClass << "da uc " << oldUc
        << " para a turma " << newClass << "da uc " << newUc << " porque ha conflitos no horario." << endl;
        return students;
    }

    vector<Estudante> oldUcAndClassRemoved = t.removeStudentFromUcAndClass(studentCode, oldUc, oldClass, students);
    vector<Estudante> result = t.addStudentToUcAndClass(studentCode, newUc, newClass, oldUcAndClassRemoved);

    return result;
}


int main() {

    ReadFiles o;
    LogisticaDeTurmas l;
    TrocaDeTurmas t;
    vector<Estudante> students = o.readStudentsFile();

    l.printStudentSchedule(201071557, students);

    //vector<Estudante> res = t.addStudentToUcAndClass(201071557, "L.EIC023", "3LEIC08", students);
    //t.removeStudentFromUcAndClass(201071557, "L.EIC025", "3LEIC08", students);

    vector<Estudante> res = changeStudentClass(201071557, "L.EIC025", "3LEIC08" , "L.EIC001", "1LEIC12", students);
    cout << "============================" << endl;

    l.printStudentSchedule(201071557, res);


    //queue<PedidoDeTrocaDeTurmas> pedidos;



    return 0;
}
