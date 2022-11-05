//
// Created by anete on 04/11/2022.
//

#ifndef SRC_TROCADETURMAS_H
#define SRC_TROCADETURMAS_H

#include "Estudante.h"
#include "ReadFiles.h"
#include "LogisticaDeTurmas.h"


class TrocaDeTurmas {
public:
    int getClassOccupation(string ucCode, string classCode, vector<Estudante> &students);
    vector<Aula> getLessonBasedOnClassAndUc(string ucCode, string classCode);
    bool verifyScheduleSobreposion(int studentCode, string ucCode, string classCode, vector<Estudante> &students);
    bool verifyClassesEquilibrium(string oldUcCode, string oldClassCode, string newUcCode, string newClassCode, vector<Estudante> &students);
    vector<Estudante> addStudentToUcAndClass(int studentCode, string ucCode, string classCode, vector<Estudante> &students);

    vector<Estudante> removeStudentFromClass(int studentCode, string classCode, vector<Estudante> &estudantes);
    vector<Estudante> removeStudentFromUc(int studentCode, string ucCode, vector<Estudante> &estudantes);

    vector<Estudante> removeStudentFromUcAndClass(int studentCode, string ucCode,string classCode, vector<Estudante> &estudantes);

};


#endif //SRC_TROCADETURMAS_H
