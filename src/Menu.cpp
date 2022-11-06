//
// Created by anete on 20/10/2022.
//

#include "Menu.h"

ReadFiles o;
vector<Estudante> students = o.readStudentsFile();

LogisticaDeTurmas logistica;
ListingBasedOnOcupation listing;


void Menu::showMenuOccupation() {
    int input;
    cout << "Menu Alunos\n"
         << "1. Visualizar Contagem de alunos em todas as ucs\n"
         << "2. Visualizar Contagem de alunos em todas as turmas\n"
         << "3. Visualizar Contagem de alunos em todos os anos\n"
         << "4. Sair\n"
         << "Escolha uma das opcoes! ";
    do {
        cin >> input;
        switch (input) {
            case 1:
            {
                // mostrar contagem todas as ucs
                listing.printUcNumberOfStudentsSortedByUc(students);
                showMenuOccupation();
                break;
            }
            case 2:
            {
                // mostrar contagem de todas as ucs e suas turmas
                listing.printNumberOfStudentsInAllClass(students);
                showMenuOccupation();
                break;
            }
            case 3: {
                //mostrar contagem ano
                listing.printNumberOfStudentsPerYear(students);
                showMenuOccupation();
                break;
            }
            case 4: {
                exit(0);
            }
            default:
                cout << "Input invalido, por favor tente outra vez:" << endl;
                break;
        }
    }while (input != 4);
}

void Menu::showMenuHorario() {
    int studentCode;
    cout << "Digite o numero de estudante: "; cin >> studentCode;
    logistica.printStudentSchedule(studentCode, students);
}
void Menu::showMenuTurma() {
    //mostrar turma
    string classCode;
    cout<< "Digite o codigo da turma: "; cin >> classCode;
    listing.printStudentsInClass(classCode, students);
}
void Menu::showMenuUnidadeCurricular() {
    //mostrar uc
    string ucCode;
    cout<< "Digite o codigo da unidade curricular: "; cin >> ucCode;
    listing.printStudentsInUc(ucCode, students);
}
void Menu::showMenuStudentSomeUCs() {
    //mostrar lista;
    int num;
    cout<< "Digite o numero de Unidades Curriculares: "; cin >> num;
    listing.printStudentsWithMoreThanNUcs(num, students);
}
/*void Menu::showMenuOccupationOrder() {
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
}*/

int Menu::showGeneralMenu(){


    int escolha1;
    cout << "O. Sair\n"
         << "1. Listing de estudantes inscritos em pelo menos uma unidade curricular\n"
         << "2. Contagem de estudantes em cada Uc, Turma e Ano\n"
         << "3. Visualizar Horario de estudante de acordo com o seu numero\n"
         << "4. Visualizar estudantes Inscritos numa Turma\n"
         << "5. Visualizar estudantes inscritos numa Unidade Curricular\n"
         << "6. Visualizar estudantes com mais do que n Uc's\n";
    cout << "Escolha uma das opcoes!\n ";
    do {
        cin >> escolha1;
        switch (escolha1) {
            case 0:
                cout<< "Obrigado!";
                return 0;
            case 1:
                cout << "escolheu: 1.Listing de estudantes\n";
                cout << "-------------------------\n";
                logistica.printAllStudentsOrderedByNum(students);
                break;
            case 2:
                cout<< "escolheu: 4. Contagem de alunos\n";
                cout << "-------------------------\n";
                showMenuOccupation();
                break;
            case 3:
                cout<<"Escolheu: 5.Visualizar Horario\n "
                    << "-------------------------\n";
                showMenuHorario();
                break;
            case 4:
                cout<<"Escolheu: 6. Visualizar Turma\n "
                    << "-------------------------\n";
                showMenuTurma();
                break;
            case 5:
                cout<<"Escolheu:7. Visualizar Alunos inscritos numa Unidade Curricular\n"
                    << "-------------------------\n";
                showMenuUnidadeCurricular();
            case 6:
                cout<< "Escolheu:8. Visualizar estudantes com n Uc's\n"
                    << "-------------------------\n";
                showMenuStudentSomeUCs();

        }
        if (escolha1>0 && escolha1){
            cout << "O. Sair\n"
                 << "1. Listing de estudantes inscritos em pelo menos uma unidade curricular\n"
                 << "2. Contagem de estudantes em cada Uc, Turma e Ano\n"
                 << "3. Visualizar Horario de estudante de acordo com o seu numero\n"
                 << "4. Visualizar estudantes Inscritos numa Turma\n"
                 << "5. Visualizar estudantes inscritos numa Unidade Curricular\n"
                 << "6. Visualizar estudantes com mais do que n Uc's\n";
            cout << "Escolha uma das opcoes!\n ";
        }
    }
    while(escolha1!=0);
}