#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>


int main() {

    Aula aula("1leic", "segunda", 10.5, 1, "TP");
    Estudante st(202020, "Anete linda");


    cout <<  "codigo: " << aula.getUcCode()  << endl;
    cout <<  "duracao: " << aula.getDuration()  << endl;
    cout << 00231 << endl;
    cout <<  "numero: " << st.getStudentCode()  << endl;
    cout <<  "nome: " << st.getStudentName() << endl;


    return 0;
}
