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
          * @brief Compara por UC's e separa os estudantes por determinada UC.
		  * @param estudantes:vector de objetos do tipo estudante (Lista de estudantes).
		  * @param classD:Código da UC escolhida para comparação.
		  * @return pair com nome do estudante e o código da uc a que ele está naquela turma.
		  */
    vector <pair<string, string>> compareClassOcupation(vector<Estudante> &estudantes, string classD);
    /**
		  * [Descrição da função]
		  * @param [nome do 1º argumento da da função]:[Descrição da variável]
		  * @param [nome do 2º argumento da da função]:[Descrição da variável]
			...
		  * @return [Descrição do valor de retorno]
		  */
    void printClassOcupation(vector<Estudante> &estudantes, string classD);
    /**
		  * [Descrição da função]
		  * @param [nome do 1º argumento da da função]:[Descrição da variável]
		  * @param [nome do 2º argumento da da função]:[Descrição da variável]
			...
		  * @return [Descrição do valor de retorno]
		  */
    vector <pair<string, string>> compareUcOcupation(vector<Estudante> &estudantes, string uc);
    /**
		  * [Descrição da função]
		  * @param [nome do 1º argumento da da função]:[Descrição da variável]
		  * @param [nome do 2º argumento da da função]:[Descrição da variável]
			...
		  * @return [Descrição do valor de retorno]
		  */
    void printUcOcupation(vector<Estudante> &estudantes, string uc);
};


#endif //SRC_LISTINGBASEDONOCUPATION_H
