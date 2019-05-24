#ifndef CHASIS_H
#define CHASIS_H

#include <string>
using std::string;

class Chasis{

    private:
        string rueda;
        bool automatico;

    public:
        Chasis();
        Chasis(string, bool);

        string getRueda();
        void setRueda();

        bool getAutomatico();
        void setAutomatico();

        string toString();
};
#endif