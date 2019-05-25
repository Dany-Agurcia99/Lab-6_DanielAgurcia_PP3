#include "Pintura.h"

Pintura::Pintura(){
    this->color="";
    this->acabado="";
}

Pintura::Pintura(string color, string acabado){
    this->color=color;
    this->acabado=acabado;
}

string Pintura::getColor(){
    return color;
}

void Pintura::setColor(string color){
    this->color=color;
}

string Pintura::getAcabado(){
    return acabado;
}

void Pintura::setAcabado(string acabado){
    this->acabado=acabado;
}

string Pintura::toString(){
    string PinturaStr;
    PinturaStr="["+color+","+acabado+"]";
    return PinturaStr;
}