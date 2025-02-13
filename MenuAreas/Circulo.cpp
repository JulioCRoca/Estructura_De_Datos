#include "Circulo.h"
#include "Math.h"
Circulo::Circulo() {

}
void Circulo::set_radio(float _radio) {
	radio = _radio; 
}
float Circulo::get_radio() {
	return radio; 
}
float Circulo::CalcularArea() {
	return 3.1416 * pow(radio, 2);
}