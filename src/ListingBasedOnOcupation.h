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
    vector <pair<string, string>> CompareClassOcupation(vector<Estudante> &estudantes, string classD);
    void PrintClassOcupation();

};


#endif //SRC_LISTINGBASEDONOCUPATION_H
