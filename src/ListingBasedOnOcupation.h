//
// Created by anete on 03/11/2022.
//

#ifndef SRC_LISTINGBASEDONOCUPATION_H
#define SRC_LISTINGBASEDONOCUPATION_H

#include "Estudante.h"
#include "ReadFiles.h"
#include <list>



class ListingBasedOnOcupation {
public:
    /**
          * @brief Compara por turmas e separa os estudantes por determinada turma.
		  * @param estudantes:vector de objetos do tipo estudante (Lista de estudantes).
		  * @param classD:Código da turma escolhida para comparação.
		  * @return pair com nome do estudante e o código da turma.
		  */
    vector <pair<string, string>> compareClassOcupation(vector<Estudante> &estudantes, string classD);
    /**
		  * @brief Lista e imprime os alunos e suas respectivas turmas.
          * @param estudantes:vector de objetos do tipo estudante (Lista de estudantes).
		  * @param classD:Código da UC escolhida para comparação.
		  */
    void printClassOcupation(vector<Estudante> &estudantes, string classD);
    /**
		  * @brief Compara por UC's e separa os estudantes por determinada UC.
		  * @param estudantes:vector de objetos do tipo estudante (Lista de estudantes).
		  * @param uc:Código da UC escolhida para comparação.
		  * @return pair com nome do estudante e o código da uc a que ele está naquela turma.
		  */
    vector <pair<string, string>> compareUcOcupation(vector<Estudante> &estudantes, string uc);
    /**
		  * @brief Lista e imprime os alunas e suas UC's.
		  * @param estudantes:vector de objetos do tipo estudante (Lista de estudantes).
		  * @param uc:Código da UC escolhida para comparação.
		  */
    void printUcOcupation(vector<Estudante> &estudantes, string uc);
};


#endif //SRC_LISTINGBASEDONOCUPATION_H
