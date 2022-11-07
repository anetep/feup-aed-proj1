//
// Created by anete on 20/10/2022.
//
/**
 * \file Aula.h
 * \brief Ficheiro header da classe Aula
 */
#ifndef SRC_AULA_H
#define SRC_AULA_H


#include <iostream>
#include <string>
using namespace std;

class Aula {
private:
    /**
     * \brief Código da turma.
     */
    string classCode_;  // Código da Uc

    /**
     *\brief Código da cadeira.
     */
    string ucCode_;  // Código da Uc

    /**
     * \brief Dia da semana.
     */
    string weekday_; //Dia da semana

    /**
     * \brief Hora de Início.
     */
    float startHour_; //Hora de Início da aula

    /**
     * \brief Duração da aula.
     */
    float duration_;// Duração da aula

    /**
     * \brief Tipo de aula(T, TP e PL).
     */
    string type_; // Tipo da aula (T || TP || PL)

public:

    Aula();

    /**
	    * \brief Construtor da classe.
	*/
    Aula(const string &classCode_, const string &ucCode_, const string &weekday_,const float &startHour_,const float &duration_,const string &type_);

    /**
		  * @return código da cadeira.
		  */
    string getUcCode() const;

     /**
		  * @return código da turma.
		  */
    string getClassCode() const;

    /**
		  * @return dia da semana da aula.
		  */
    string getWeekday() const;

     /**
		  * @return a hora de início da aula.
		  */
    float getStartHour() const;

    /**
		  * @return o tempo de duração da aula.
		  */
    float getDuration() const;

    /**
		  * @return a hora que a aula acaba.
		  */
    float getEndHour() const;

    /**
		  * @return o tipo da aula.
		  */
    string getTypeOfClass() const;
};


#endif //SRC_AULA_H
