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
#include "Menu.h"


int main() {


    int escolha1;
    cout << "O. Sair"<< endl<<"1. Listing de estudantes TESTE\n"
         << "2. Adicionar Estudante\n" << "3. Apagar estudante\n"<< "4. Contagem de alunos\n"
         << "5. Visualizar Horário\n"
         << "6. Visualizar Turma\n"
         << "7. Visualizaar Alunos inscritos numa Unidade Curricular\n"
         << "8. Visualizar estudantes com n Uc's\n";
    cout << "Escolha uma das opcoes!\n ";
    do {
        cin >> escolha1;
        switch (escolha1) {
            case 0:
                cout<< "Obrigado!";
                return 0;
            case 1:
                cout << "escolheu: 1.Listing de estuantes\n";
                cout << "-------------------------\n";
                //student.printAllStudents();
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
                cout<<"Escolheu: 5.Visualizar Horario\n "
                    << "-------------------------\n";
                Menu::showMenuHorario();
                break;
            case 6:
                cout<<"Escolheu: 6. Visualizar Turma\n "
                    << "-------------------------\n";
                Menu::showMenuTurma();
                break;
            case 7:
                cout<<"Escolheu:7. Visualizar Alunos inscritos numa Unidade Curricular\n"
                    << "-------------------------\n";
                Menu::showMenuUnidadeCurricular();
            case 8:
                cout<< "Escolheu:8. Visualizar estudantes com n Uc's\n"
                    << "-------------------------\n";
                Menu::showMenuStudentSomeUCs();

        }
        if (escolha1>0 && escolha1){
            cout << "O. Sair"<< endl<<"1. Listing de estudantes TESTE\n"
                 << "2. Adicionar Estudante\n" << "3. Apagar estudante\n"<< "4. Contagem de alunos\n"
                 << "5. Visualizar Horário\n"
                 << "6. Visualizar Turma\n"
                 << "7. Visualizaar Alunos inscritos numa Unidade Curricular\n"
                 << "8. Visualizar estudantes com n Uc's\n";
            cout << "Escolha uma das opcoes!\n ";
        }
    }
    while(escolha1!=0);

    return 0;
}
