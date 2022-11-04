//
// Created by anete on 20/10/2022.
//

#include "Menu.h"


void Menu::showMenuOccupation() {
    int input;
    cout<< "Menu Contagem\n"
        << "1.Contagem de alunos numa turma\n"
        << "2. Contagem de alunos numa Unidade Curricular\n"
        << "3. Contagem de alunos num ano\n"
        << "Escolha uma das opcoes! "; cin >> input;

    switch (input) {
        case 1:
            cout<<"-----------------\n";
            showMenuOccupation();
            break;
        case 2:
            cout<<"-----------------\n";

    }
}
void Menu::showMenuAlunos() {
    int input;
    cout << "Menu Alunos\n"
         << "1. Visualizar Alunos de determinada UC\n"
         << "2. Visualizar Alunos de determinada Turma\n"
         << "3. Visualizar Alunos de determinado Ano\n"
         << "4. Sair\n"
         << "Escolha uma das opcoes! ";
    /*do {
        cin >> input;
        switch (input) {
            case 1:
                string UC;
                cout<< "Digite a uc\n";
                break;
            case 2:
                string turma;
                int ano2;
                cout<< "Digite a turma\n";cin>> turma;
                cout<< "Digite o ano\n";cin>> ano2;
                //show turma(turma, ano);
                break;
            case 3:
                int ano3;
                cout<< "Digite o ano\n"; cin>> ano3;
                //
                break;
        }
    } while (input != 4);*/
    }

    void Menu::showMenuHorario() {
        int input;
        cout << "Menu Horários\n"
             << "1.Digite o número de estudante\n"
             << "2.Digite o numero da turma\n"
             << "3. Sair";
        do {
            cin >> input;
            switch (input) {
                case 1:
                    //show horario estudante
                    break;
                case 2:
                    int ano;
                    cout << "Digite o ano\n";
                    cin >> ano;
                    // show horario
                    break;
                case 3:
                    break;
                default:
                    cout << "Input invalido, por favor tente outra vez:" << endl;
            }
            if (input != 3) {
                cout << "Menu Horários\n"
                     << "1.Digite o número de estudante\n"
                     << "2.Digite o numero da turma\n"
                     << "3. Sair";
            }
        } while (input != 3);
    }