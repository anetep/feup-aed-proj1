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
    vector <pair<string, string>> compareClassOcupation(vector<Estudante> &estudantes, string classD);
    void printClassOcupation(vector<Estudante> &estudantes, string classD);

    vector <pair<string, string>> compareUcOcupation(vector<Estudante> &estudantes, string uc);
    void printUcOcupation(vector<Estudante> &estudantes, string uc);

};


#endif //SRC_LISTINGBASEDONOCUPATION_H
