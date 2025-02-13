
#include <iostream>
#include "circulo.h"
using namespace std; 

int main()
{
	float radio; 
	circulo circulito;
	cout << "Cual es el radio del circulo?: ";
	cin >> radio;
	circulito.set_radio(radio);
	cout<<"El radio de su circulo es:"<<circulito.CalcularArea();
	return 0; 
}



