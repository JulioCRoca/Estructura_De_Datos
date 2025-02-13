#include "circulo.h"
circulo::circulo() {

}

float circulo::get_radio() {
	return radio; 
}
void circulo::set_radio(float _radio) {
	 radio=_radio;
}
double circulo::CalcularArea() {
	return 3.14 * radio * radio; 
}