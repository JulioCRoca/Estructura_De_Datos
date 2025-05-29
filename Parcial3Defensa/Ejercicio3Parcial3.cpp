#include <iostream>
#define MAX 20
#include <string>
#include "Dato.h"
/*3.	Dada una matriz cuadrada de tamaño n x n que representa el consumo de aceite 
de un cliente en distintos días, escriba un programa para sumar todos los elementos de la matriz.*/
using namespace std; 
void Ingresar_Datos(Dato Matriz[][MAX],int tam); 
float SumaConsumo(Dato Matriz[][MAX],int tam); 
float Promedio(Dato Matriz[][MAX], int tam);
int main()
{
	Dato Consumo[MAX][MAX];
	float ConsumoAceite;
	int tam=0,opcion=0; 
	do {
		cout << "======Menu======" << endl; 
		cout << "1.Ingresar consumo de aceite" << endl;
		cout << "2.Consumo de aceite total" << endl;
		cout << "3.Promedio de aceite diario" << endl;
		cout << "0.Salir" << endl;
		cin >> opcion;
		switch(opcion){
			case 1:
				cout << "Ingrese el tamaño de la matriz: ";
				cin >> tam;
				if(tam>MAX) {
					cout << "El tamaño no puede ser mayor a " << MAX << endl;
				} else {
					Ingresar_Datos(Consumo,tam);
				}
				break;
			case 2:
				cout << "El consumo de aceite total es:" << SumaConsumo(Consumo, tam) << endl;
				break;
			case 3: 
				cout << "El promedio de consumo es: " << Promedio(Consumo,tam) << endl;
				break;
			case 0:
				cout << "Saliendo del programa..." << endl;
				break;
			default:
				cout << "Ingrese una opcion valida" << endl;
				break;
		}
	} while (opcion != 0);
	return 0; 

}
void Ingresar_Datos(Dato Matriz[][MAX], int tam) {
	int cantidad,dia=0,id; 
	string nombre;
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < tam; j++) {
			dia++;
			do {
				cout << "Ingrese el consumo de aceite del dia " << dia << ": ";
				cin >> cantidad;
				if (cantidad <= 0)
					cout << "Ingrese un valor valido" << endl; 
			} while (cantidad <=0); 
			do {
				cout << "Ingrese el ID del cliente "<<dia<<":";
				cin >> id;
				if (id < 0) {
					cout << "Ingrese una id valida" << endl;
				}
			} while (id < 0);
			cin.ignore();
			cout << "Ingrese el nombre del cliente: ";
			cin >> nombre;
			Matriz[i][j].setCantidad(cantidad);
			Matriz[i][j].setId(id);
			Matriz[i][j].setNombre(nombre);
		}
	}
}
float SumaConsumo(Dato Matriz[][MAX], int tam) {
	float suma = 0;
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < tam; j++) {
			suma =suma+ Matriz[i][j].getCantidad();
		}
	}
	return suma;
}
float Promedio(Dato Matriz[][MAX], int tam) {
	float suma = SumaConsumo(Matriz, tam);
	int totalElementos = tam * tam;
	return suma / totalElementos;
}


