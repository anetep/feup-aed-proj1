//
// Created by anete on 01/11/2022.
//

#include "ReadFiles.h"


using namespace std;

// retorna um vector com todos os estudantes do ficheiro
vector<Estudante> ReadFiles::readStudentsFile(){
    ifstream in("helper_students.txt");
    string line;
    char* dup;

    vector <Estudante> all;

    if (in.is_open()){
        getline(in, line); // para saltar a 1a linha
        while (getline(in, line)){
            dup = strdup(line.c_str());
            int studentNum = atoi(strtok(dup, ","));
            string studentName = strtok(NULL, ",");
            string ucCode = strtok(NULL, ",");
            string classCode = strtok(NULL, ",");
            Turma t(ucCode,classCode);
            list<Turma> for_est;
            for_est.push_back(t);
            Estudante s(studentNum, studentName, for_est);
            all.push_back(s);
        }
    } else{
        cerr << "Nao existe nenhum ficheiro de estudantes com o nome dado" << endl;
    }
    in.close();

    vector <Estudante> result = joinStudentClases(all);

    return result;
}


vector<Estudante> ReadFiles::joinStudentClases(vector <Estudante> &fromFile){
    int i = 0;
    int size = fromFile.size();

    vector<Estudante> cleanStudents;
    list<Turma> turmas;
    Estudante s;

    while (size) {
        if (fromFile[i].getStudentCode() == fromFile[i + 1].getStudentCode()) {
            turmas.push_back(fromFile[i].getStudentSchedule().front());
            size--;
            i++;
        }
        else {
            turmas.push_back(fromFile[i].getStudentSchedule().front());
            s.setStudentCode(fromFile[i].getStudentCode());
            s.setStudentName(fromFile[i].getStudentName());
            s.setStudentClasses(turmas);
            cleanStudents.push_back(s);
            turmas.clear();
            size--;
            i++;
        }
    }
    return cleanStudents;
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
    }else{
        cerr << "Can't open classes file, the name given doesn't exist" << endl;
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
    }else{
        cerr << "Can't open classes per uc file, the name given doesn't exist" << endl;
    }

    in.close();
    return  turmas;
}





