#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"

vector <pair<string, string>> ClassOcupation(vector<Estudante> &estudantes, string classD){
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


int main() {
    // ocupação de turmas
    // recebe uma turma e dá print dos alunos
    // TODO arrumar estudantes de forma a q as suas turmas ficam na lista
    // TODO ver casos em que nome repete.

    // para ludovico
    Turma aa("L.EIC021","3LEIC04");
    Turma ab("L.EIC022","3LEIC02");
    Turma ac("L.EIC023","3LEIC08");
    Turma ad("L.EIC025","3LEIC07");
    list<Turma> ludo = {aa, ab, ac, ad};
    Estudante a(202071557, "Ludovico", ludo);

    // para gisela
    Turma ba("L.EIC004","1LEIC08");
    Turma bb("L.EIC005","1LEIC08");
    list<Turma> gis = {ba, bb};
    Estudante b(202031607, "Gisela", gis);

    // para iara
    Turma ca("L.EIC002","1LEIC05");
    list<Turma> ia = {ca};
    Estudante c(202025232, "Iara", ia);

    // para carminho
    Turma da("L.EIC025","3LEIC08");
    Turma db("L.EIC006","1LEIC08");
    list<Turma> car = {da, db};
    Estudante d(202025232, "Carminho", car);

    vector<Estudante> teste;
    teste.push_back(a);
    teste.push_back(b);
    teste.push_back(c);
    teste.push_back(d);

    cout << "turma: 3LEIC08" << endl; // ludovico e carminho
    vector<pair<string, string>> res = ClassOcupation(teste, "3LEIC08");
    for (auto r: res){
        cout << r.first << " na unidade curricular " << r.second << endl;
    }
    cout << "===================" << endl;

    cout << "turma: 1LEIC08" << endl; // gisela e carminho
    vector<pair<string, string>> res2 = ClassOcupation(teste, "1LEIC08");
    for (auto r: res2){
        cout << r.first << " na unidade curricular " << r.second << endl;
    }
    cout << "===================" << endl;

    cout << "turma: 1LEIC05" << endl; // iara
    vector<pair<string, string>> res3 = ClassOcupation(teste, "1LEIC05");
    for (auto r: res3){
        cout << r.first << " na unidade curricular " << r.second << endl;
    }
    cout << "===================" << endl;


    return 0;
}
