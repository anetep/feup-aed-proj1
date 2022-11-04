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
    vector<Estudante> addStudentToAClass(int studentCode, string ucCode, string classCode, vector<Estudante> &students);


};


#endif //SRC_TROCADETURMAS_H