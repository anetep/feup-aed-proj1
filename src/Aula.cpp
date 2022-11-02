//
// Created by anete on 20/10/2022.
//

#include "Aula.h"

Aula::Aula(){
    this->ucCode_ = "";
    this->weekday_ = "";
    this->startHour_ = 0;
    this->duration_ = 0;
    this->type_ = "";
}

Aula::Aula(const string &uc, const string &wkd,const float &sh,const float &d,const string &t){
    this->ucCode_ = uc;
    this->weekday_ = wkd;
    this->startHour_ = sh;
    this->duration_ = d;
    this->type_ = t;
}


string Aula::getUcCode() {return ucCode_;} //get Uc code

string Aula::getWeekday() {return weekday_;}

float Aula::getStartHour() {return startHour_;}

float Aula::getDuration() {return duration_;}

float Aula::getEndHour() {return startHour_ + duration_;}

string Aula::getTypeOfClass(){return type_;}

