#include "Chasis.h"


Chasis::Chasis(){
    this->rueda="";
    this->automatico="";
}

Chasis::Chasis(string rueda, string automatico){
    this->rueda=rueda;
    this->automatico=automatico;
}

string Chasis::getRueda(){
    return rueda;
}

void Chasis::setRueda(string rueda){
    this->rueda=rueda;
}

string Chasis::getAutomatico(){
    return automatico;
}

void Chasis::setAutomatico(string automatico){
    this->automatico=automatico;
}

string Chasis::toString(){
    string ChasisStr;
    ChasisStr="["+rueda+","+automatico+"]";
    return ChasisStr;
}