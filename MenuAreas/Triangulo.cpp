#include "Triangulo.h"
Triangulo::Triangulo() {


}
void Triangulo::set_base(float _base) {
	base = _base; 
}
void Triangulo::set_altura(float _altura) {
	altura = _altura; 
}
float Triangulo::get_base() {
	return base; 
}
float Triangulo::get_altura() {
	return altura; 
}
float Triangulo::AreaT() {
	return (base * altura) / 2; 
}