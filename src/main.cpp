#include <iostream>
#include <vector>


#include "Aula.h"
#include "Estudante.h"
#include "ReadFiles.h"
#include <list>
#include <set>
#include "LogisticaDeTurmas.h"
#include "ListingBasedOnOcupation.h"

//TODO função para verificar estudantes inscritos numa turma
//TODO função para verificar estudantes inscritos em todas as turmas
//TODO função para adicionar estudante a uma turma/uc se o nr de inscritos não for superior a 30
//          implica eliminar da anterion e adicionar tanto às práticas como às teóricas

//TODO função para imprimir ocupação de todas as turmas/uc
//TODO função para imprimir o número de inscritos em todas as turmas

//TODO Corrigir o remove para remover o estudante da turma/uc ao mesmo tempo
// TODO corrigir o print das ocupações

int getClassOccupation(string ucCode, string classCode, vector<Estudante> &students){
    int counter = 0;
    for (auto &st : students){
        for (auto &turma : st.getStudentSchedule()){
            if (turma.getClassCode() == classCode && turma.getUcCode() == ucCode)
                counter ++;
        }
    }
    return counter;
}

Estudante getStudentWithCodeX(int studentCode, vector<Estudante> &students){
    Estudante res;
    for (auto &st : students){
        if (st.getStudentCode() == studentCode) return st;
    }
    cout << "Não existe estudante com esse número" << endl;
    return res; // se não houver retorna estudante vazio
}

// vector pk pode ser aula prática/teórica ou outras
vector<Aula> getLessonBasedOnClassAndUc(string ucCode, string classCode){
    ReadFiles o;
    vector<Aula> todasAulas = o.readClassesFile();
    vector<Aula> res;
    for (auto &aula : todasAulas){
        if (aula.getUcCode() == ucCode && aula.getClassCode() == classCode)
            res.push_back(aula);
    }
    return res;
}

// verifica a compatibilidade entre horários.
// verifica dia da semana e a hora entre todas as aulas do estudante com a nova e se houver igual retorna falso
bool verifyScheduleSobreposion(int studentCode, string ucCode, string classCode, vector<Estudante> &students){
    LogisticaDeTurmas a;
    Estudante stud = getStudentWithCodeX(studentCode, students); // pegar outras informações do estudante
    vector<Aula> studentLessons = a.turnStudentClassesToLessons(stud); // pegar as aulas do estudante
    vector<Aula> newLesson = getLessonBasedOnClassAndUc(ucCode, classCode); // pegar aulas da cadeira que quer se mudar

    // verifica dia da semana
    // depois hora de início se é igual || se hora de fim da do estudante é superior a de início da nova || se hora de
    // 10h30 até 12h30         11h30 até 13h30
    for (auto &stLesson : studentLessons){
        for (auto &les : newLesson){
            if (stLesson.getWeekday() == les.getWeekday()){
                if (stLesson.getStartHour() == les.getStartHour()) return true;
                else if (stLesson.getEndHour() > les.getStartHour()) return true;
            }
        }
    }
    return false; // não tem sobreposição
}


bool verifyClassesEquilibrium(string oldUcCode, string oldClassCode, string newUcCode, string newClassCode, vector<Estudante> &students){
    int oldClassOccupation = getClassOccupation(oldUcCode, oldClassCode, students);
    int newClassOccupation = getClassOccupation(newUcCode, newClassCode, students);
    return abs(oldClassOccupation - newClassOccupation) <= 4;
}


vector<Estudante> addStudentToAClassDirectlyByCapacity(int studentCode, string ucCode, string classCode, vector<Estudante> &students) {
    // se a lotação atual da turma for superior a 30 não pode haver troca
    if (getClassOccupation(ucCode, classCode, students) >= 30) {
        cerr << "Operacao anulada! A turma" << classCode << " da uc " << ucCode << " já tem "
             << getClassOccupation(ucCode, classCode, students)
             << "e por isso não podem ser adicionados mais estudantes." << endl;
        return students;
    }

    // se houver sobreposição entre horários não faz a troca
    if (verifyScheduleSobreposion(studentCode, ucCode, classCode, students)){
        cerr << "Operacao anulada! O estudante nao pode ser adicionado a turma " << classCode << " da uc " << ucCode
            << " porque ha sobreposicoes no horario" << endl;
        return students;
    }

    list<Turma> newTurmas;
    vector<Estudante> resultado;

    for (auto &st: students) {
        for (auto &turma: st.getStudentSchedule()) {
            // verifica primeiro se há equilibrio entre as turmas
            if (!verifyClassesEquilibrium(turma.getUcCode(), turma.getClassCode(), ucCode, classCode, students)) {
                cerr << "Operacao anulada! O estudante nao pode ser adicionado a turma " << classCode << " da uc "
                     << ucCode << " porque nao ha equilibrio entre as turmas" << endl;
                return students;
            }
            if (st.getStudentCode() == studentCode){
                newTurmas.push_back(turma);
                Turma nova(ucCode, classCode);
                newTurmas.push_back(nova);
            }else{
                newTurmas.push_back(turma);
            }
        }
        st.setStudentClasses(newTurmas);
        resultado.push_back(st);
        newTurmas.clear();
    }
    return resultado;
}


int main() {
    ReadFiles o;
    vector<Estudante> estudantes = o.readStudentsFile();

    ListingBasedOnOcupation r;

    r.printClassOcupation(estudantes, "3LEIC07");

    addStudentToAClassDirectlyByCapacity(201071357, "L.EIC022", "3LEIC07", estudantes);

    r.printClassOcupation(estudantes, "3LEIC07");

    return 0;
}
