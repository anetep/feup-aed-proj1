//
// Created by anete on 01/11/2022.
//

#ifndef SRC_READFILES_H
#define SRC_READFILES_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include "Estudante.h"

using namespace std;

class ReadFiles {
public:
    vector<Estudante> readStudentsFile() const;
};


#endif //SRC_READFILES_H
