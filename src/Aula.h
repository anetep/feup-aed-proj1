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
    string getUcCode();
    string getWeekday();
    float getStartHour();
    float getDuration();
    void getEndHour();
};


#endif //SRC_AULA_
