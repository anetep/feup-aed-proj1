#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include "Menu.h"
#include <list>
#include <set>
#include <string>



int main() {

    Estudante student;
    ReadFiles r;
    vector<pair<int, string>> s = r.readStudentsFile();

    student.addVectorOfStudents(s);

    //student.printAllStudents();

    int escolha1;
    cout << "O. Sair"<< endl<<"1. Listing de estudantes TESTE" << endl;
    cout << "2. Adicionar Estudante" << endl<< "3. Apagar estudante"<< endl;
    cout << "4. Listing de Estudantes"<<endl;
    cout << "Escolha uma das opcoes! "; cin >> escolha1;

    switch (escolha1) {
        case 0:
            cout<< "Obrigado!";
            return 0;
        case 1:
            cout << "escolheu: 1.Listing de estuantes\n";
            cout << "-------------------------\n";
            student.printAllStudents();
            break;
        case 2:
            cout << "escolheu: 2.Adicionar Estudante\n";
            cout << "-------------------------\n";
            cout << "nao ha nada";
            break;
        case 3:
            cout << "escolheu: 3.Apagar estudante\n";
            cout << "-------------------------\n";
            cout << "nao ha nada";
            break;
        case 4:
            cout<< "Direcionar para menu...";
            break;
        default:
            cout << "escolha uma das opcoes!!";
            cin >> escolha1;
    }

    return 0;
}
