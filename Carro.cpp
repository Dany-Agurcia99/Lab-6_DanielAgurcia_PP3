#include "Carro.h"

Carro::Carro(){

}

Carro::Carro(string modelo, int numero_modelo, Chasis chasis, Motor motor, Pintura pintura){
    this->modelo=modelo;
    this->numero_modelo=numero_modelo;
    this->chasis=chasis;
    this->motor=motor;
    this->pintura=pintura;
}

string Carro::getModelo(){
    return modelo;
}
void Carro::setModelo(string modelo){
    this->modelo=modelo;
}

int Carro::getNumero(){
    return numero_modelo;
}
void Carro::setNumero(int numero_modelo){
    this->numero_modelo=numero_modelo;
}

Chasis Carro::getChasis(){
return chasis;
}
void Carro::setChasis(Chasis chasis){
    this->chasis=chasis;
}

Motor Carro::getMotor(){
return motor;
}
void Carro::setMotor(Motor motor){
    this->motor=motor;
}
        
Pintura Carro::getPintura(){
return pintura;
}

void Carro::setPintura(Pintura pintura){
    this->pintura=pintura;
}

string Carro::toString(){

}