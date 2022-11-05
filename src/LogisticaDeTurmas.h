//
// Created by anete on 22/10/2022.
//

#ifndef SRC_LOGISTICADETURMAS_H
#define SRC_LOGISTICADETURMAS_H


#include "Estudante.h"
#include "Turma.h"
#include "ReadFiles.h"
#include "ListingBasedOnOcupation.h"
#include <cmath>
#include <list>



class LogisticaDeTurmas {
private:
public:
        /**
		  * @brief Percorre pelo vector students e verifica se existem estudantes com mesmo StudentCode, então separa os estudantes removendo suas duplicatas.
		  * @param students:vector de objetos do tipo estudante (Lista de estudantes).
		  * @return Retorna um vector de tipo Estudante sem repetições de studentCode, ou seja, sem alunos duplicados com o mesmo StudentCode.
		  */
    vector<Estudante> removeDuplicatesStudentsNums(vector<Estudante> &students);
        /**
		  * @brief Percorre pelo vector aulas e verifica se existem turmas com a mesma ClassCode, então separa as turmas removendo suas duplicatas.
		  * @param aulas:vector de objetos do tipo turma (Lista de turmas).
		  * @return Retorna um vector de tipo Turma sem repetições de ClassCode, ou seja, sem turmas duplicadas com a mesma ClassCode.
		  */
    vector<Turma> removeDuplicateClassCode(vector<Turma> &aulas);
        /**
		  * @brief Percorre pelo vector aulas e verifica se existem turmas com a mesma UcCode, então separa as turmas removendo suas duplicatas.
		  * @param aulas:vector de objetos do tipo turma (Lista de turmas).
		  * @return Retorna um vector de tipo Turma sem repetições de UcCode, ou seja, sem turmas duplicadas com a mesma UcCode.
		  */
    vector<Turma> removeDuplicateUcCode(vector<Turma> &aulas);

    /**
		  * @brief Faz print de todos os estudantes ordenados pelo seu StudentCode.
		  */
    void printAllStudentsOrderedByNum();
    void printAllClasses();
    void printAllUcs();

    Estudante getStudentWithCodeX(int studentCode, vector<Estudante> &students);
    Estudante getStudentFromFile(int studentCode);
    vector<Aula> turnStudentClassesToLessons(Estudante &student);
    string convertFloatToTime(float hour);
    void printStudentSchedule(int studentCode);

    vector<Estudante> removeStudentFromClass(int studentCode, string classCode, vector<Estudante> &estudantes);
    vector<Estudante> removeStudentFromUc(int studentCode, string ucCode, vector<Estudante> &estudantes);
    void printStudentRemovedFromClass(int studentCode, string classCode, vector<Estudante> &estudantes);
    void printStudentRemovedFromUc(int studentCode, string ucCode, vector<Estudante> &estudantes);


};


#endif //SRC_LOGISTICADETURMAS_H
