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
#include <string.h>
#include "Estudante.h"
#include "Aula.h"


using namespace std;

class ReadFiles {
public:
    vector<Estudante> readStudentsFile();
    vector<Aula> readClassesFile();
};


#endif //SRC_READFILES_H
