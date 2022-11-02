//
// Created by anete on 01/11/2022.
//

#include "ReadFiles.h"
#include "Estudante.h"

Estudante student;
using namespace std;

vector<pair<int, string>> ReadFiles::readStudentsFile(){
    ifstream in("helper.txt");

    string line;
    string word;
    string delimiter = ",";  // para pegar cada número

    pair<int, string> oneStudent;
    vector <pair<int, string>> all;

    if (in.is_open()){
        getline(in, line); // para saltar a 1a linha
        while (getline(in, line)){
            string n = line.substr(0, line.find(delimiter));
            string newSub = line.substr(line.find(delimiter) + 1, line.length() - 1);
            string studentName = newSub.substr(0, newSub.find(delimiter));
            int studentNum = stoi(n);
            oneStudent.first = studentNum;
            oneStudent.second = studentName;
            all.push_back(oneStudent);
        }
    } else{
        cerr << "Nao existe nenhum ficheiro de estudantes com o nome dado" << endl;
    }
    in.close();

    return all;
}
