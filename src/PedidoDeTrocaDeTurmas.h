//
// Created by anete on 06/11/2022.
//

#ifndef SRC_PEDIDODETROCADETURMAS_H
#define SRC_PEDIDODETROCADETURMAS_H


#include "Estudante.h"

class PedidoDeTrocaDeTurmas {
private:
    int studentToChangeCode;
    Turma oldClass;
    Turma newClass;
    list<Turma> classesToChange;
public:
    PedidoDeTrocaDeTurmas();

    // Para alterar a turma/UC de um estudante
    PedidoDeTrocaDeTurmas(int st, Turma oldCl, Turma newCl);

    // TODO: Para alterar um conjunto de turmas/UCs. Falta corrigit o classes to change para pegar antigas e novas turmas
    //PedidoDeTrocaDeTurmas(int st, Turma oldCl, Turma newCl, list<Turma> classes);

    int getStudentToChangeCode() const;
    Turma getOldClass() const;
    Turma getNewClass() const;
    //list<Turma> getClassesToChange() const;

    void setStudentToChange(int st);
    void setOldClass(Turma cl);
    void setNewClass(Turma cl);
    //void setClassesToChange(list<Turma> classes);
};


#endif //SRC_PEDIDODETROCADETURMAS_H
