//
// Created by anete on 06/11/2022.
//

/**
 * \file PedidoDeTrocaDeTurma.h
 * \brief Ficheiro header da classe PedidoDeTrocaDeTurma.
 */

#ifndef SRC_PEDIDODETROCADETURMAS_H
#define SRC_PEDIDODETROCADETURMAS_H


#include "Estudante.h"

class PedidoDeTrocaDeTurmas {
private:
    /**
     * \brief Código do estudante que pretende mudar de turma.
     */
    int studentToChangeCode;
    
    /**
     * \brief uc/turma antiga do estudante.
     */
    Turma oldClass;

    /**
     * \brief uc/turma desejada pelo estudante.
     */
    Turma newClass;
    
public:
    /**
    * \brief Construtor da classe 
    */
    PedidoDeTrocaDeTurmas();

    /**
    * \brief Construtor da classe com atributos st, oldCl, newCl.
    * @param st é o estudante
    * @param oldC1 é a antiga turma do estudante
    * @param newC1 é a nova turma do estudante
    */
    PedidoDeTrocaDeTurmas(int st, Turma oldCl, Turma newCl);

    /**
    * @return código do estudante que vai mudar de turma.
    */
    int getStudentToChangeCode() const;

    /**
    * @brief Função que exibe a uc/turma antiga.
    * @return uc/turma antiga.
    */
    Turma getOldClass() const;

    /**
    * @brief Função que exibe a uc/turma nova.
    * @return uc/turma nova.
    */
    Turma getNewClass() const;
    
    /**
    * @brief define o estudante que muda de turma.
    * @param st é o novo estudante.
    */
    void setStudentToChange(int st);
    
    /**
    * @brief define a turma antiga.
    * @param cl é a turma antiga
    */
    void setOldClass(Turma cl);

    /**
    * \brief define a turma nova.
    * @param cl é a turma nova.
    */
    void setNewClass(Turma cl);
};


#endif //SRC_PEDIDODETROCADETURMAS_H
