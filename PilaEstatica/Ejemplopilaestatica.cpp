// Ejemplopilaestatica.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Pila.h"
#include "TipoDato.h"
#include <string>
using namespace std; 
int main()
{
	TipoDato cars; 
	Pila car; 
	int option;
	string tipe; 
	do {
		cout << "Ingrese la opcion que quiere elegir:";
		cout << "1. Push car" << endl; 
		cout << "2. Pop car" << endl;
		cout << "3. View top of cars" << endl;
		cout << "4. Clean cars" << endl;
		cout << "5. View cars" << endl;
		cout << "0. Exit" << endl; 
		switch (option){
		case 1: 
			cout << "Ingrese el tipo de auto: "; 
			cin >> cars.descripcion;
			cout << "Ingrese la placa del auto:"; 
			cin >> cars.id; 
			car.Apilar(cars); 
			break; 
		case 2:
			car.Desapilar();
			break;
		case 3:
			car.CimaPila(cars);
			break;
		case 4:
			car.LimpiarPila(); 
			break;
		case 5:
			car.VerPila();
			break;
		case 0:
			cout << "Saliendo del programa...." << endl; 
			break;
		default:
			cout << "Error.........." << endl; 
			break;
		}
	} while (option < 0); 
}

