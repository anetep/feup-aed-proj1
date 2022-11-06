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

int Menu::showGeneralMenu(){
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
                showMenuOccupation();
                break;
            case 5:
                cout<<"Escolheu: 5.Visualizar Horario\n "
                    << "-------------------------\n";
                showMenuHorario();
                break;
            case 6:
                cout<<"Escolheu: 6. Visualizar Turma\n "
                    << "-------------------------\n";
                showMenuTurma();
                break;
            case 7:
                cout<<"Escolheu:7. Visualizar Alunos inscritos numa Unidade Curricular\n"
                    << "-------------------------\n";
                showMenuUnidadeCurricular();
            case 8:
                cout<< "Escolheu:8. Visualizar estudantes com n Uc's\n"
                    << "-------------------------\n";
                showMenuStudentSomeUCs();

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
}