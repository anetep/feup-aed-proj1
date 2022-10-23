//
// Created by anete on 20/10/2022.
//

#include "Aula.h"

int Aula::getUcCode() {
    return ucCode_;
}

int Aula::getWeekday() {return weekday_;}

float Aula::getStartHour() {return startHour_;}

float Aula::getDuration() {return duration_;}

void Aula::getEndHour() {
    return startHour_ + duration_;
}
