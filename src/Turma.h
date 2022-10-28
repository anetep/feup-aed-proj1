//
// Created by anete on 20/10/2022.
//

#ifndef SRC_TURMA_H
#define SRC_TURMA_H

#include <iostream>
#include <list>

#include "Estudante.h"
#include "Aula.h"


using namespace std;

class Turma {
private:
    string classCode;
    int classCapacity;
    list<Aula> classUcs;
    list<Estudante> classStudents;
public:
    /**
     * \brief Construtor default da classe Turma.
     * Instancia uma turma com classCode "", classCapacity 0, classUcs {},list<Estudante> {}.
     */
    Turma();

    /**
     * Instancia uma turma com atributos definidos pelos parâmetros da função.
     * @param classCode Código/número da turma.
     * @param classCapacity Capacidade de uma turma.
     * @param classUcs Aulas de uma turma.
     * @param classStudents Estudantes de uma turma.
     */
    Turma(string classCode, int classCapacity, list<Aula> classUcs, list<Estudante> classStudents);


    /**
     * Retorna o código de uma turma.
     * @return código da turma.
     */
    string getClassCode();

    /**
     * Retorna a capacidade de uma turma.
     * @return capacidade da turma.
     */
    int getClassCapacity(); //TODO: Implementar para receber um classCode e retornar a capacity de uma turma definida pelo user?

};


#endif //SRC_TURMA_H
