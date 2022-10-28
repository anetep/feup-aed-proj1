//
// Created by anete on 20/10/2022.
//

#include "Aula.h"

string Aula::getUcCode() {return ucCode_;} //get Uc code

string Aula::getWeekday() {return weekday_;}

float Aula::getStartHour() {return startHour_;}

float Aula::getDuration() {return duration_;}

float Aula::getEndHour() {return startHour_ + duration_;}
