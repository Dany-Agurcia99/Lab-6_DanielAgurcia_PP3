#ifndef CHASIS_H
#define CHASIS_H

#include <string>
using std::string;

class Chasis{

    private:
        string rueda;
        string automatico;

    public:
        Chasis();
        Chasis(string, string);

        string getRueda();
        void setRueda(string);

        string getAutomatico();
        void setAutomatico(string);

        string toString();
};
#endif