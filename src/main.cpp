#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"

vector<Turma> remove(vector<Turma> &aulas) {
    int i = 0;
    int size = aulas.size();
    vector<Turma> newA;
    while (size) {
        if (aulas[i].getUcCode() == aulas[i + 1].getUcCode()) {
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

bool compare(Turma &x, Turma &y) {
    return x.getUcCode() < y.getUcCode();
}


int main() {

    //LogisticaDeTurmas l;
    //l.printAllClasses();

    Turma a("L.EIC001","1LEIC12");
    Turma b("L.EIC001","1LEIC09");
    Turma c("L.EIC002","1LEIC04");
    Turma d("L.EIC003","1LEIC10");
    Turma e("L.EIC001","1LEIC12");
    Turma f("L.EIC002","1LEIC04");

    vector<Turma> teste;
    teste.push_back(a);
    teste.push_back(b);
    teste.push_back(c);
    teste.push_back(d);
    teste.push_back(e);
    teste.push_back(f);

    cout << "------------------------" << endl;
    cout << "original" << endl;

    for (auto &c : teste){
        cout << c.getUcCode() << endl;
    }

    cout << "------------------------" << endl;
    cout << "depois de sorted" << endl;

    sort(teste.begin(), teste.end(), compare);

    for (auto &c : teste){
        cout << c.getUcCode() << endl;
    }

    cout << "------------------------" << endl;
    cout << "depois de eliminado" << endl;

    vector<Turma> testeFiltered = remove(teste);

    for (auto &c : testeFiltered){
        cout << c.getUcCode() << endl;
    }

    return 0;
}
