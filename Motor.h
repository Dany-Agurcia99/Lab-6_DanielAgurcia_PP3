#ifndef MOTOR_H
#define MOTOR_H

#include <string>
using std::string;

class Motor{
    private:
        string electrico;
        string config;
    public:
        Motor();
        Motor(string,string);

        string getElectrico();
        void setElectrico(string);

        string getConfig();
        void setConfig(string);

        string toString();
};

#endif