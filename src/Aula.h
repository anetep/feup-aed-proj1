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
    string ucCode_;  // Código da Uc
    string weekday_; //Dia da semana
    float startHour_; //Hora de Início da aula
    float duration_;// Duração da aula
    string type_; // Tipo da aula (T || TP)

public:

    /**
     * \brief Construtor default da classe Aula.
     * Instancia um Aula com ucCode_ "", weekday_ "", float = 0.0, duration_ = 0.0, type_ "".
     */
    Aula();

    /**
     * Instancia um cliente com atributos definidos pelos parâmetros da função.
     * @param ucCode_ Código da Uc.
     * @param weekday_ Dia da semana da aula.
     * @param startHour_ Hora de Início da aula.
     * @param duration_ Duração da aula.
     * @param type_ Tipo da aula (T || TP).
     */
    Aula(string ucCode_, string weekday_, float startHour_, float duration_, string type_);

    /**
     * Retorna Código da Uc.
     * @return Código da Uc.
     */
    string getUcCode();

    /**
     * Retorna Dia da semana da aula.
     * @return Dia da semana da aula.
     */
    string getWeekday();

    /**
     * Retorna Hora de Início da aula.
     * @return Hora de Início da aula.
     */
    float getStartHour();

    /**
     * Retorna a Duração da aula.
     * @return Duração da aula.
     */
    float getDuration();

    /**
     * Retorna a Hora de Fim da aula.
     * @return a Hora de Fim da aula.
     */
    float getEndHour();
};


#endif //SRC_AULA_
