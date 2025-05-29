#include "Dato.h"
using namespace std;
Dato::Dato(){
	cantidad = 0;
	nombre = "";
	id = 0;
}
void Dato::setCantidad(int _cantidad) {
	cantidad = _cantidad;
}
void Dato::setNombre(string _nombre) {
	nombre = _nombre;
}
void Dato::setId(int _id) {
	id = _id;
}
int Dato::getCantidad(){
	return cantidad;
}
string Dato::getNombre() {
	return nombre;
}
int Dato::getId() {
	return id;
}