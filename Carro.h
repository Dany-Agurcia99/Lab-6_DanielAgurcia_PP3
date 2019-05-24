#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"

class Carro{
    private: 
        int j;
        string modelo;
        int numero_modelo;
        Chasis chasis;
        Motor motor;
        Pintura pintura;
    public:
        string getModelo();
        void setModelo();

        int getNumero();
        void setNumero();

        Chasis getChasis();
        void setChasis(string,bool);

        Motor getMotor();
        void setMotor(bool, string);

        Pintura getPintura();
        void setPintura(string, string);
        
        string toString();
};
#endif