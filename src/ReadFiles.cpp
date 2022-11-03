//
// Created by anete on 01/11/2022.
//

#include "ReadFiles.h"


using namespace std;

// retorna um vector com todos os estudantes do ficheiro
vector<Estudante> ReadFiles::readStudentsFile(){
    ifstream in("helper.txt");

    string line;
    string word;
    string delimiter = ",";  // para pegar cada atributo separadamente

    vector <Estudante> all;

    if (in.is_open()){
        getline(in, line); // para saltar a 1a linha
        while (getline(in, line)){
            string n = line.substr(0, line.find(delimiter));
            string newSub = line.substr(line.find(delimiter) + 1, line.length() - 1);
            string studentName = newSub.substr(0, newSub.find(delimiter));
            int studentNum = stoi(n);
            Estudante oneStudent(studentNum, studentName);
            all.push_back(oneStudent);
        }
    } else{
        cerr << "Nao existe nenhum ficheiro de estudantes com o nome dado" << endl;
    }

    in.close();
    return all;
}

vector<Aula> ReadFiles::readClassesFile(){
    ifstream in("helper_classes.txt");
    string line;

    char* dup;
    vector <Aula> aulas;

    if (in.is_open()){
        getline(in, line);
        while (getline(in, line)){
            dup = strdup(line.c_str());
            string cl = strtok(dup, ",");
            string uc = strtok(NULL, ",");
            string day = strtok(NULL, ",");
            float start = stof(strtok(NULL, ","));
            float dur = stof(strtok(NULL, ","));
            string type = strtok(NULL, ",");

            Aula r(cl, uc, day, start, dur, type);
            aulas.push_back(r);
        }
    }

    in.close();

    return  aulas;
}


vector<Turma> ReadFiles::readClassesPerUcFile(){
    ifstream in("helper_per_uc.txt");
    string line;

    char* dup;
    vector <Turma> turmas;

    if (in.is_open()){
        getline(in, line);
        while (getline(in, line)){
            dup = strdup(line.c_str());
            string ucCode = strtok(dup, ",");
            string classCode = strtok(NULL, ",");

            Turma r(ucCode, classCode);
            turmas.push_back(r);
        }
    }

    in.close();
    return  turmas;
}





