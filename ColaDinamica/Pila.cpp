#include "Pila.h"
Pila::Pila() {

}
bool Pila::isEmpty(Pila* _first) {
	if (cima == nullptr) {
		return true; 
	}
	else {
		return false; 
	}
}
void Pila::Apilar(Pila* _first) {
	Pila	*temp, *last;
	
	if (pos == 0) {
		_first = new Pila;
		cout << "Ingrese el dato 0:";
		cin >> last->dato;
		last->next = nullptr;
		last = _first;
		cima = last; 
		pos++;
	}
	else {
		temp = new Pila;
		cout << "Ingrese el valor " << i << ":";
		cin >> temp->dato;
		temp->next = nullptr;
		last->next = temp;
		last = temp;
		cima = last; 
		pos++; 
	}

}
void Pila::Desapilar(Pila* _first) {
	Pila* last; 
	if (isEmpty(_first)) {
		cout << "Pila vacía " << endl; 
	}
	else()
	
}
