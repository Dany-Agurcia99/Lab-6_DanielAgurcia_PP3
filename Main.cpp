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

#include <string>
using std::string;

char** CreateMatrix(char**);
void PrintMatrix(char**);
void FreeMatrix(char**);
void FreeVector(vector<Carro*>);
void AgregarListaProduccion(char**,int);
void VerLineasProduccion();
void VerListadoCarros();
void AvanzarCiclo(char**);

vector<Carro*> lista_carros;
vector<Carro*> lista_prototipos;
vector<Carro*> lista_enProduccion;

int main(){
    char** matrix = new char*[5];
    matrix = CreateMatrix(matrix);
    int opcion=0;
    int contador=0;
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
                        contador++;
                        if (contador<=5){
                            AgregarListaProduccion(matrix, contador);
                        }else{
                            cout<<"Ya no se pueden agregar mas listas de produccion"<<endl;
                        }
                        break;
                    case 2:
                        PrintMatrix(matrix);
                        break;
                    case 3:
                        VerLineasProduccion();
                        break;
                    case 4:
                        VerListadoCarros();
                        break;
                    case 5:
                        AvanzarCiclo(matrix);
                        break;
                    case 6:
                        FreeMatrix(matrix);
                        FreeVector(lista_carros);
                        FreeVector(lista_enProduccion);
                        FreeVector(lista_prototipos);
                        break;
                }
        }
return 0;
}
char** CreateMatrix(char** matrix){
    for(int i=0;i<5;i++){
        matrix[i] = new char[4];
    }
    for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			matrix[i][j]=' '; 
		}
	}
    return matrix;
}
void PrintMatrix(char** matrix){
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			cout<<"["<<matrix[i][j]<<"]"; 
		}
		cout<<endl;
	}
}
void FreeMatrix(char** matrix){
	for(int i=0;i<5;i++){
		if(matrix[i]!=NULL){
			delete[] matrix[i];
			matrix[i]=NULL;
		}
	}
	delete[] matrix;
}
void FreeVector(vector<Carro*> lista_carros){
    for (int i = 0; i < lista_carros.size(); i++){
        delete lista_carros[i];
    }
}
void AgregarListaProduccion(char** matrix, int posicion){
    string modelo;
    cout<<"Ingrese modelo del carro: ";
    cin>>modelo;
    int numero;
    cout<<"Ingrese el numero de modelo del carro: ";
    cin>>numero;

    string rueda;
    cout<<"Ingrese las ruedas del chasis: ";
    cin>>rueda;
    string automatico;
    cout<<"Ingrese si es automatico el chasis: ";
    cin>>automatico;

    string electrico;
    cout<<"Ingrese si el motor es electrico: ";
    cin>>electrico;
    string config;
    cout<<"Ingrese la configuracion del motor: ";
    cin>>config;

    string color;
    cout<<"Ingrese el color del carro";
    cin>>color;
    string acabado;
    cout<<"Ingrese el acabado del carro";
    cin>>acabado;

    Chasis* chasis = new Chasis(rueda,automatico);
    Motor* motor = new Motor(electrico,config);
    Pintura* pintura = new Pintura(color,acabado);

    Carro* prototype = new Carro(modelo,numero,chasis,motor,pintura);
    lista_prototipos.push_back(prototype);
    matrix[posicion-1][0]='P';
}
void VerLineasProduccion(){
    for (int i = 0; i < lista_enProduccion.size(); i++){
        cout<<lista_enProduccion[i]->toString()<<endl;
        cout<<"*****************"<<endl;
    }
}
void VerListadoCarros(){
    for (int i = 0; i < lista_carros.size(); i++){
        cout<<lista_carros[i]->toString()<<endl;
        cout<<"*****************"<<endl;
    }
}
void AvanzarCiclo(char** matrix){
    int cont=0;
    
    for( int i = 0; i < 5; i++){
        Carro* nuevo_carro = lista_enProduccion[i];
        for (int j = 0; j < 4; j++){
            if (matrix[i][0]=='P'&&matrix[i][j]==' '){
                matrix[i][j]='C';
                j=20;
            }
        }
        for (int k = 0; k < 5; k++){
            for (int l = 0; l < 4; l++){
                if(matrix[k][l]!=' '){
                    cont++;
                }
            }
            if(cont==4){
                lista_enProduccion.erase(lista_enProduccion.begin()+lista_enProduccion.size());
                lista_carros.push_back(lista_enProduccion[i]);
            }
        }
    }
    
    PrintMatrix(matrix);
}