//
// Created by anete on 01/11/2022.
//

/**
 * \file ReadFiles.h
 * \brief Ficheiro header da classe ReadFiles.
 */
#ifndef SRC_READFILES_H
#define SRC_READFILES_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <string.h>
#include "Estudante.h"
#include "Aula.h"
#include "Turma.h"


using namespace std;

class ReadFiles {
public:
    /**
          * @brief faz leitura do file e devolve um vector com todos os estudantes do ficheiro.
		  * @return vector com todos os estudantes do ficheiro.
		  */
    vector<Estudante> readStudentsFile();

    /**
          * @brief Faz um set de estudantes por nome e studentCode atribuindo cada um a suas respetivas turmas e UC's.
          * @param fromFile vector do tipo estudante com estudantes repetidos
		  * @return vector com todos os estudantes do ficheiro separados cada um com sua turma, sem repetir estudantes.
		  */
    vector<Estudante> joinStudentClases(vector <Estudante> &fromFile);

    /**
          * @brief Faz a leitura do arquivo classes.txt e separa suas informações separadas por virgula num vector de objetos de classe aula.
          * @return vector com todos os dados de classe.txt organizados dentro de um vector de objetos de classe aula.
		  */
    vector<Aula> readClassesFile();

    /**
    * \brief Lê o ficheiro e armazena um par com o código da unidade curricular e turma a que pertence.
    * @return vetor com todas as unidades curriculares e turmas a que pertencem.
    */
    vector<Turma> readClassesPerUcFile();

};


#endif //SRC_READFILES_H
