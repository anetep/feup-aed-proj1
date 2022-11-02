#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>


int main() {

    Aula aula("1leic", "segunda", 10.5, 1, "TP");
    ReadFiles r;
    vector<Estudante> st = r.readStudentsFile();

    cout <<  "codigo: " << aula.getUcCode()  << endl;
    cout <<  "duracao: " << aula.getDuration()  << endl;
    cout << 00231 << endl;

    for (const auto &s : st){
        cout <<  "num: " << s.getStudentCode()  << "   ";
        cout <<  "nome: " << s.getStudentName()  << endl;
    }



    return 0;
}
