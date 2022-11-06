#include <iostream>
#include <vector>
#include <queue>


#include "ReadFiles.h"
#include <list>
#include <set>

#include "Menu.h"



int main() {
    Menu m;
    m.showGeneralMenu();
    ReadFiles o;
    vector<Estudante> st = o.readStudentsFile();
    LogisticaDeTurmas l;


    return 0;
}
