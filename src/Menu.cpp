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





//TODO corrigir se o input for inválido
void Menu::showMenuHorario() {
    int studentCode;
    cout << "Digite o numero de estudante: "; cin >> studentCode;
    while (cin.fail())
    {
        cerr << "Introduziu um numero de estudante errado, por favor tente novamente" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> studentCode;
    }
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

int Menu::showGeneralMenu(){


    int escolha1;
    cout << "O. Sair\n"
         << "1. Listing de estudantes inscritos em pelo menos uma unidade curricular\n"
         << "2. Contagem de estudantes em cada Uc, Turma e Ano\n"
         << "3. Visualizar Horario de estudante de acordo com o seu numero\n"
         << "4. Visualizar estudantes Inscritos numa Turma\n"
         << "5. Visualizar estudantes inscritos numa Unidade Curricular\n"
         << "6. Visualizar estudantes com mais do que n Uc's\n"
         << "7. Listing de todas as Unidades Curriculares disponiveis no sistema\n"
         << "8. Listing de todas as turmas disponiveis no sistema\n"
         << "9. Operacoes para adicionar, remover e trocar de turma\n";
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
                cout<< "escolheu: 2. Contagem de alunos\n";
                cout << "-------------------------\n";
                showMenuOccupation();
                break;
            case 3:
                cout<<"Escolheu: 3.Visualizar Horario\n "
                    << "-------------------------\n";
                showMenuHorario();
                break;
            case 4:
                cout<<"Escolheu: 4. Visualizar Turma\n "
                    << "-------------------------\n";
                showMenuTurma();
                break;
            case 5:
                cout<<"Escolheu:5. Visualizar Alunos inscritos numa Unidade Curricular\n"
                    << "-------------------------\n";
                showMenuUnidadeCurricular();
            case 6:
                cout<< "Escolheu:6. Visualizar estudantes com n Uc's\n"
                    << "-------------------------\n";
                showMenuStudentSomeUCs();
            case 7:
                cout<< "Escolheu:7. Listing de Uc's\n"
                    << "-------------------------\n";
                logistica.printAllUcs();
                break;
            case 8:
                cout<< "Escolheu:8. Listing de turmas\n"
                    << "-------------------------\n";
                logistica.printAllClasses();
                break;
            case 9:
                cout<< "Escolheu:8. Troca de turmas\n"
                    << "-------------------------\n";
                showMenuChangeOfClasses();
                break;

        }
        if (escolha1>0 && escolha1){
            cout << "O. Sair\n"
                 << "1. Listing de estudantes inscritos em pelo menos uma unidade curricular\n"
                 << "2. Contagem de estudantes em cada Uc, Turma e Ano\n"
                 << "3. Visualizar Horario de estudante de acordo com o seu numero\n"
                 << "4. Visualizar estudantes Inscritos numa Turma\n"
                 << "5. Visualizar estudantes inscritos numa Unidade Curricular\n"
                 << "6. Visualizar estudantes com mais do que n Uc's\n"
                 << "7. Listing de todas as Unidades Curriculares disponiveis no sistema\n"
                 << "8. Listing de todas as turmas disponiveis no sistema\n"
                 << "9. Operacoes para adicionar, remover e trocar de turma\n";
            cout << "Escolha uma das opcoes!\n ";
        }
    }
    while(escolha1!=0);
}