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
vector<Estudante> changeStudentClass(PedidoDeTrocaDeTurmas &p, vector<Estudante> &students){
    TrocaDeTurmas t;
    LogisticaDeTurmas l;

    int studentCode = p.getStudentToChangeCode();
    string oldUc = p.getOldClass().getUcCode();
    string oldClass = p.getOldClass().getClassCode();
    string newUc = p.getNewClass().getUcCode();
    string newClass = p.getNewClass().getClassCode();

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


    PedidoDeTrocaDeTurmas p1(201071557, Turma("L.EIC025", "3LEIC08"), Turma("L.EIC001", "1LEIC12")); //Carminho
    PedidoDeTrocaDeTurmas p2(202031607, Turma("L.EIC025", "3LEIC08"), Turma("L.EIC001", "1LEIC12")); // Gisela
    PedidoDeTrocaDeTurmas p3(201071357, Turma("L.EIC025", "3LEIC08"), Turma("L.EIC001", "1LEIC12")); //Anete

    l.printStudentSchedule(201071557, students);

    queue<PedidoDeTrocaDeTurmas> pedidos;
    pedidos.push(p1);
    pedidos.push(p2);
    pedidos.push(p3);

    vector<Estudante> res = changeStudentClass(pedidos.front(), students);

    vector<Estudante> res2 = changeStudentClass(pedidos.front(), students);
    cout << "============================" << endl;

    l.printStudentSchedule(201071557, res);


    //queue<PedidoDeTrocaDeTurmas> pedidos;



    return 0;
}
