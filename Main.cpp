#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Carro.h"
#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"

#include <vector>
using std::vector;

int main(){
    vector<Carro*> lista_carros;
    int opcion=0;
    while(opcion!=6){
                cout<<"Menu"<<endl
                <<"1- Agregar Lista de Produccion"<<endl
                <<"2- Ver Matriz"<<endl
                <<"3- Ver lineas de produccion"<<endl
                <<"4- Ver listado de carros"<<endl
                <<"5- Avanzar ciclo de linea de produccion"<<endl
                <<"6- Salir"<<endl;
                cout<<"Ingrese una opcion: "<<endl;
                cin>>opcion;
                switch(opcion){
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                }
        }
    for (int i = 0; i < lista_carros.size(); i++){
        delete lista_carros[i];
    }
return 0;
}