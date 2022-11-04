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
    cout << "O. Sair"<< endl<<"1. Listing de estudantes TESTE\n"
        << "2. Adicionar Estudante\n" << "3. Apagar estudante\n"<< "4. Contagem de alunos\n"
        << "5.Ver Horário\n";
    cout << "Escolha uma das opcoes! ";
    do {
        cin >> escolha1;
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
                cout<< "escolheu: 4. Contagem de alunos\n";
                cout << "-------------------------\n";
                Menu::showMenuOccupation();
                break;
            case 5:
                cout<<"Escolheu: 5.Ver Horário\n "
                    << "-------------------------\n";
                Menu::showMenuHorario();
                break;
        }
        if (escolha1!=0){
            cout << "O. Sair"<< endl<<"1. Listing de estudantes TESTE\n"
                 << "2. Adicionar Estudante\n" << "3. Apagar estudante\n"<< "4. Contagem de alunos\n"
                 << "5.Ver Horário\n";
            cout << "Escolha uma das opcoes! ";
        }
    }
    while(escolha1!=0);
    return 0;
}
