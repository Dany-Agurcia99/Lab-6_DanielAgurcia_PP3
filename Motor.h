#ifndef MOTOR_H
#define MOTOR_H

#include <string>
using std::string;

class Motor{
    private:
        bool electrico;
        string config;
    public:
        Motor();
        Motor(bool,string);

        bool getElectrico();
        void setElectrico();

        string getConfig();
        void setConfig();

        string toString();
};

#endif