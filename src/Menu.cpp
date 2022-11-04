//
// Created by anete on 20/10/2022.
//

#include "Menu.h"


void Menu::showMenuOccupation() {
    int input;
    cout << "Menu Alunos\n"
         << "1. Visualizar Contagem de alunos de determinada UC\n"
         << "2. Visualizar Contagem de alunos de determinada Turma\n"
         << "3. Visualizar Contagem de alunos de determinado Ano\n"
         << "4. Sair\n"
         << "Escolha uma das opcoes! ";
    do {
        cin >> input;
        switch (input) {
            case 1:
            {string UC;
                cout<< "Digite a uc\n";// mostrar contagem uc
                cout << "-------------------------\n";
                showMenuOccupationOrder();
                break;}
            case 2:
            {
                string turma;
                int ano;
                cout<< "Digite a turma\n";cin>> turma;
                cout<< "Digite o ano\n";cin>> ano;//mostrar contagem turma
                cout << "-------------------------\n";
                showMenuOccupationOrder();
                break;}
            case 3:
                int ano2;
                cout<<"Digite o ano\n";cin>> ano2;//mostrar contagem ano
                cout << "-------------------------\n";
                showMenuOccupationOrder();
            default:
                cout << "Input invalido, por favor tente outra vez:" << endl;
                break;

    }
    }while (input != 4);
}

    void Menu::showMenuHorario() {
        int input;
        cout << "Digite o número de estudante\n";
        cin >> input;
        // mostrar horario(nr_estudante)
    }
    void Menu::showMenuTurma() {
    int input;
    cout<< "Digite o numero da turma\n";
    //mostrar turma
}
void Menu::showMenuUnidadeCurricular() {
    int input;
    cout << "Digite o número da Unidade Curricular\n";
    cin>> input;
    // mostrar uc
}
void Menu::showMenuStudentSomeUCs() {
    int input;
    cout<< "Digite o numero de Unidades Curriculares;";
    cin>> input;
    //mostrar lista;
}
void Menu::showMenuOccupationOrder() {
    int input;
    cout<< "Menu Ordem\n"
        << "1. Ordenar por Uc\n"
        << "2. Ordem ascendente\n"
        << "3. Ordem descendente\n"
        << "4. Sair\n";
    do{
        cin>> input;
        switch (input) {
            case 1:
                // mostrar por ordem de uc
                break;
            case 2:
                //ordem ascendente
                break;
            case 3:
                //ordem descendente
                break;
            case 4:
                break;
            default:
                cout << "Input invalido, por favor tente outra vez:" << endl;
                break;
        }
        if (input=!4){
            cout<< "Menu Ordem\n"
                << "1. Ordenar por Uc\n"
                << "2. Ordem ascendente\n"
                << "3. Ordem descendente\n"
                << "4. Sair\n";
        }
    }while(input!=4);


}
