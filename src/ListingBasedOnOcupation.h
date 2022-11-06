//
// Created by anete on 03/11/2022.
//

#ifndef SRC_LISTINGBASEDONOCUPATION_H
#define SRC_LISTINGBASEDONOCUPATION_H

#include "Estudante.h"
#include "ReadFiles.h"
#include "TrocaDeTurmas.h"
#include <list>



class ListingBasedOnOcupation {
public:
    vector <pair<string, string>> compareStudentsInClass(string classCode, vector<Estudante> &students);
    void printStudentsInClass(string classCode, vector<Estudante> &students);

    vector <pair<string, string>> compareStudentsInUc(string ucCode, vector<Estudante> &students);
    void printStudentsInUc(string ucCode, vector<Estudante> &students);

    vector<string> getAllUniqueUcsFromStudentsEnrolled(vector<Estudante> &students);
    int getUcNumberOfStudentsSortedByUc(string ucCode, vector<Estudante> &students);
    void printUcNumberOfStudentsSortedByUc(vector<Estudante> &students);

    vector<Turma> removeDuplicateUcsAndClasses(vector<Turma> &aulas);
    vector<Turma> getAllUniqueUcsAndClassesFromStudentsEnrolled(vector<Estudante> &students);

    void printNumberOfStudentsInAllClass(vector<Estudante> &students);

    int getYearNumberOfStudents(int year, vector<Estudante> &students);
    void printNumberOfStudentsPerYear(vector<Estudante> &students);
    };


#endif //SRC_LISTINGBASEDONOCUPATION_H
