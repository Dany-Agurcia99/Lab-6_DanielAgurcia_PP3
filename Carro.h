#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"

class Carro{
    private: 
        string modelo;
        int numero_modelo;
        Chasis chasis;
        Motor motor;
        Pintura pintura;
    public:
        Carro();
        Carro(string, int, Chasis, Motor, Pintura);

        string getModelo();
        void setModelo(string);

        int getNumero();
        void setNumero(int);

        Chasis getChasis();
        void setChasis(Chasis);

        Motor getMotor();
        void setMotor(Motor);

        Pintura getPintura();
        void setPintura(Pintura);
        
        string toString();
};
#endif