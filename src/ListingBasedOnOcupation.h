//
// Created by anete on 03/11/2022.
//

#ifndef SRC_LISTINGBASEDONOCUPATION_H
#define SRC_LISTINGBASEDONOCUPATION_H

#include "Estudante.h"
#include "ReadFiles.h"
#include <list>



class ListingBasedOnOcupation {
public:
    vector <pair<string, string>> compareStudentsInClass(string classCode, vector<Estudante> &students);
    void printStudentsInClass(string classCode, vector<Estudante> &students);

    vector <pair<string, string>> compareStudentsInUc(string ucCode, vector<Estudante> &students);
    void printStudentsInUc(string ucCode, vector<Estudante> &students);

};


#endif //SRC_LISTINGBASEDONOCUPATION_H
