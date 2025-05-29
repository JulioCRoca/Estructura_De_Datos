#pragma once
#include <iostream>
using namespace std; 
class Pila
{
	private: 
		int dato; 
		Pila *next; 
		int pos=0;
		Pila* cima=nullptr; 
	public:
		Pila(); 
		void Apilar(Pila* _first);
		void Desapilar(Pila* _first); 
		void Cima(Pila* _first);
		void MostrarPila(Pila *_fist);
		bool isEmpty(Pila* _first);
};

