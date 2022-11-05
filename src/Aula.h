//
// Created by anete on 20/10/2022.
//
/**
 * \file Aula.h
 * Ficheiro header da classe Aula
 */
#ifndef SRC_AULA_H
#define SRC_AULA_H


#include <iostream>
#include <string>
using namespace std;

class Aula {
private:
    /**
     * Código da turma.
     */
    string classCode_;  // Código da Uc
    /**
     * Código da cadeira.
     */
    string ucCode_;  // Código da Uc
    /**
     * Dia da semana.
     */
    string weekday_; //Dia da semana
    /**
     * Hora de Início.
     */
    float startHour_; //Hora de Início da aula
    /**
     * Duração da aula.
     */
    float duration_;// Duração da aula
    /**
     * Tipo de aula(T, TP e PL).
     */
    string type_; // Tipo da aula (T || TP || PL)

public:
    Aula();
    Aula(const string &classCode_, const string &ucCode_, const string &weekday_,const float &startHour_,const float &duration_,const string &type_);
    /**
		  * Construtor da classe.
		  */
    string getUcCode() const;
    /**
          * @brief pega código da cadeira.
		  * @return código da cadeira.
		  */
    string getClassCode() const;
    /**
		  * @return código da turma.
		  */
    string getWeekday() const;
    /**
		  * @return Dia da semana da aula.
		  */
    float getStartHour() const;
    /**
		  * @return a hora de início da aula.
		  */
    float getDuration() const;
    /**
		  * @return o tempo de duração da aula.
		  */
    float getEndHour() const;
    /**
		  * @return a hora que a aula acaba.
		  */
    string getTypeOfClass() const;
    /**
		  * @return o tipo da aula.
		  */
};


#endif //SRC_AULA_H
