//
// Created by anete on 04/11/2022.
//

/**
 * \file TrocaDeTurmas.h
 * \brief Ficheiro header da classe TrocaDeTurmas.
 */

#ifndef SRC_TROCADETURMAS_H
#define SRC_TROCADETURMAS_H

#include "Estudante.h"
#include "ReadFiles.h"
#include "PedidoDeTrocaDeTurmas.h"
#include "LogisticaDeTurmas.h"


class TrocaDeTurmas {
public:

    /**
    * \brief Devolve o numero de estudantes inscritos numa determinada cadeira numa determinada turma.
    * @param ucCode código da unidade curricular.
    * @param classCode código da turma.
    * @param students vector de objetos da classe Estudante contendo todos os estudantes inscritos
    * @return número de estudantes inscritos numa uc/turma.
    */
    int getClassOccupation(string ucCode, string classCode, vector<Estudante> &students);

    /**
    * @param ucCode código da unidade curricular
    * @param classCode código da turma
    * @return um vector do tipo Aula com as aulas existentes para a turma com código de uc dado no primeiro argumento e código de turma dado no segundo argumento
    */
    vector<Aula> getLessonBasedOnClassAndUc(string ucCode, string classCode);
    
    /**
    * \brief Função que retorna true se há sobreposição de horários.
    * @param studentCode código do estudante.
    * @param ucCode código da UC.
    * @param classCode código da turma.
    * @param students vector de objetos da classe Estudante contendo todos os estudantes inscritos
    * @return true se há sobreposição e false se não houver sobreposição de horários.
    */
    bool verifyScheduleSobreposion(int studentCode, string ucCode, string classCode, vector<Estudante> &students);

    /**
    * \brief Função que retorna true se há equilíbrio entre as salas
    * @param oldUcCode código da UC antiga.
    * @param oldClassCode código da turma antiga.
    * @param newUcCode código da UC nova.
    * @param newClassCode código da turma nova.
    * @param students vector de objetos da classe Estudante contendo todos os estudantes inscritos
    * @return true se há equilíbrio entre as salas e false se não houver.
    */
    bool verifyClassesEquilibrium(string oldUcCode, string oldClassCode, string newUcCode, string newClassCode, vector<Estudante> &students);
    
    /**
    * \brief Função que adiciona um estudante a uma turma e unidade curricular.
    * @param studentCode código do estudante.
    * @param ucCode código da UC.
    * @param classCode código da turma.
    * @param students vector de objetos da classe Estudante contendo todos os estudantes inscritos
    * @return novo vector de objetos de classe estudante com as turmas modificas se verificar todos os critérios para ser adicionado a uma turma, senão devolve o vector de estudantes não modificado.
    */
    vector<Estudante> addStudentToUcAndClass(int studentCode, string ucCode, string classCode, vector<Estudante> &students);

    /** 
    * \brief Função que remove um estudante de determinada turma
    * @param studentCode código do estudante.
    * @param classCode código da turma.
    * @param estudents vector de objetos da classe Estudante contendo todos os estudantes inscritos
    * @return vector de estudantes com o estudante removido da turma especificada no segundo argumento
    */
    vector<Estudante> removeStudentFromClass(int studentCode, string classCode, vector<Estudante> &estudantes);
    
    /**
    * \brief Função que remove um estudante de determinada unidade curricular
    * @param studentCode código do estudante.
    * @param ucCode código da UC.
    * @param estudents vector de objetos da classe Estudante contendo todos os estudantes inscritos
    * @return vector de estudantes com o estudante removido da unidade curricular especificada no segundo argumento
    */
    vector<Estudante> removeStudentFromUc(int studentCode, string ucCode, vector<Estudante> &estudantes);

    /**
    * \brief Função que remove um estudante de determinada unidade curricular e de determinada turma.
    * @param studentCode código do estudante.
    * @param ucCode código da UC.
    * @param classCode código da turma.
    * @param students vector de objetos da classe Estudante contendo todos os estudantes inscritos
    * @return vector de estudantes com o estudante removido da unidade curricular e da turma especificadas no segundo e terceito argumentos
    */
    vector<Estudante> removeStudentFromUcAndClass(int studentCode, string ucCode,string classCode, vector<Estudante> &estudantes);
    
    /**
    * \brief Função que retorna true se o estudante pode mudar de turma.
    * @param studentCode código do estudante.
    * @param oldUc código da UC antiga.
    * @param oldClass código da turma antiga.
    * @param newUc código da UC nova.
    * @param newClass código da turma nova.
    * @param students vector de objetos da classe Estudante contendo todos os estudantes inscritos
    * @return true se o estudante pode mudar de turma, false se não puder mudar de turma.
    */
    bool verifyIfStudentCanChangeClass(int studentCode, string oldUc, string oldClass, string newUc, string newClass, vector<Estudante> students);

    /**
    * \brief Função que altera a turma do estudante.
    * @param p objeto da classe PedidoDeTrocaDeTurmas com o estudante que quer mudar de turma e as turma antiga e nova a que ele quer mudar
    * @param students vector de objetos da classe Estudante contendo todos os estudantes inscritos
    * @return vector de estudantes com as turmas mudades se o estudante pode mudar a turma ou o vector original de estudantes se o mesmo não pode mudar
    */
    vector<Estudante> changeStudentClass(PedidoDeTrocaDeTurmas &p, vector<Estudante> &students);

    };


#endif //SRC_TROCADETURMAS_H
