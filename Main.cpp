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
void AgregarListaProduccion();
void VerLineasProduccion();
void VerListadoCarros();
void AvanzarCiclo();

vector<Carro*> lista_carros;

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
                            AgregarListaProduccion();
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
                        AvanzarCiclo();
                        break;
                    case 6:
                        FreeMatrix(matrix);
                        FreeVector(lista_carros);
                        break;
                }
        }
return 0;
}
char** CreateMatrix(char** matrix){
    for(int i=0;i<5;i++){
        matrix[i] = new char[4];
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
void AgregarListaProduccion(){

}
void VerLineasProduccion(){

}
void VerListadoCarros(){

}
void AvanzarCiclo(){

}