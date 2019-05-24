#include "Motor.h"

Motor::Motor(){
    this->electrico="";
    this->config="";
}

Motor::Motor(string electrico, string config){
    this->electrico=electrico;
    this->config=config;
}

string Motor::getElectrico(){
    return electrico;
}

void Motor::setElectrico(string electrico){
    this->electrico=electrico;
}

string Motor::getConfig(){
    return config;
}

void Motor::setConfig(string config){
    this->config=config;
}

string Motor::toString(){

}