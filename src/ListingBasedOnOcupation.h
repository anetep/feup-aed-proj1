//
// Created by anete on 03/11/2022.
//

/**
 * \file ListBasedOnOccupation.h
 * \brief Ficheiro header da classe ListBasedOnOccupation
 */
#ifndef SRC_LISTINGBASEDONOCUPATION_H
#define SRC_LISTINGBASEDONOCUPATION_H

#include "Estudante.h"
#include "ReadFiles.h"
#include "TrocaDeTurmas.h"
#include <list>



class ListingBasedOnOcupation {
public:

    /**
     * \brief compara as turmas de cada estudante no vector de estudantes com a turma recebida no 1º argumento. Essa função vai auxiliar no print de estudantes inscritos numa determinada turma
     * @param classCode é o turma que vai ser comparada
     * @param students é o vector de estudantes
     * @return retorna pair com o nome do estudante e a unidade curricular a que ele tem para aquela turma
     */
    vector <pair<string, string>> compareStudentsInClass(string classCode, vector<Estudante> &students);
    

    /**
     * \brief imprime os nomes de todos os estudantes inscritos numa turma e a unidade curricular em que estão naquela turma 
     * @param classCode é o turma que vai ser comparada
     * @param students é o vector de estudantes
     */
    void printStudentsInClass(string classCode, vector<Estudante> &students);


    /**
     * \brief compara as unidades curriculares de cada estudante no vector de estudantes com a unidade curricular recebida no 1º argumento. Essa função vai auxiliar no print de estudantes inscritos numa determinada cadeira
     * @param ucCode é o unidade curricular que vai ser comparada
     * @param students é o vector de estudantes
     * @return retorna pair com o nome do estudante e a turma (classCode) a que ele está matriculado para aquela unidade curricular
     */
    vector <pair<string, string>> compareStudentsInUc(string ucCode, vector<Estudante> &students);
    

    /**
     * \brief imprime os nomes de todos os estudantes inscritos numa unidade curricular e a turmaa em que estão naquela unidade curricular 
     * @param ucCode é o turma que vai ser comparada
     * @param students é o vector de estudantes
     */ 
    void printStudentsInUc(string ucCode, vector<Estudante> &students);


    /**
     * \brief compara as unidades curriculares de cada estudante no vector de estudantes e guarda as distintas num vector string de estudantes. Essa função vai auxiliar no print do número de estudantes inscritos em cada cadeira
     * @param students é o vector de estudantes
     * @return vector com todas as ucs distintas em que os estudantes recebidos no primeiro argumento estão inscritos  
     */
    vector<string> getAllUniqueUcsFromStudentsEnrolled(vector<Estudante> &students);
    
    /**
     * @param ucCode é o código da unidade curricular
     * @param students é o vector de estudantes
     * @return número de estudantes inscritos na unidade curricular recebida no primeiro argumento
     */
    int getUcNumberOfStudentsSortedByUc(string ucCode, vector<Estudante> &students);
    
    /**
     * \brief imprime o número de estudantes inscritos numa unidade unidade curricular, ordenado alfabeticamente pela unidade curricular
     * @param students é o vector de estudantes
     */
    void printUcNumberOfStudentsSortedByUc(vector<Estudante> &students);

     /**
     * \brief remove uc/turma duplicadas no vector de turmas recebido no primeiro argumento
     * @param aulas é o vector de aulas 
     * @return o vector de turmas recebido no argumento com duplicados removidos
     */
    vector<Turma> removeDuplicateUcsAndClasses(vector<Turma> &aulas);


    /**
     * \brief pega todas as turmas de cada estudante. É auxiliar na função que imprime o nr de estudantes em cada uc/turma
     * @param students é o vector de estudantes
     * @return todos os pares do Tipo uc/turma que os estudantes pertence 
     */    
    vector<Turma> getAllUniqueUcsAndClassesFromStudentsEnrolled(vector<Estudante> &students);

    /**
     * \brief imprime o número de estudantes inscritos em cada uc/turma
     * @param students é o vector de estudantes
     */ 
    void printNumberOfStudentsInAllClass(vector<Estudante> &students);

     /**
     * @param students é o vector de estudantes
     * @return número de estudantes inscritos no ano recebido no 1º argumento
     */
    int getYearNumberOfStudents(int year, vector<Estudante> &students);
    
    /**
     * \brief imprime o número de estudantes inscritos em cada ano
     * @param students é o vector de estudantes
     */ 
    void printNumberOfStudentsPerYear(vector<Estudante> &students);

    /**
     * \brief imprime o nome de estudantes inscritos incritos em mais do n unidades curriculares
     * @param n é o número de estudantes
     * @param students é o vector de estudantes
     */ 
    void printStudentsWithMoreThanNUcs(int n, vector<Estudante> &students);

};


#endif //SRC_LISTINGBASEDONOCUPATION_H
