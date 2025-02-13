#include "Cuadrado.h"

Cuadrado::Cuadrado() {

}
void Cuadrado::set_lado(float _lado) {
	lado = _lado; 
}
float Cuadrado::get_lado() {
	return lado; 
}
float Cuadrado::AreaCuadrado() {
	return lado * lado; 
}