// Recursividad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 
float factorial(int n); 
int main()
{
	int n; 
	float fac; 
	do {
		cout << "Ingrese el valor de n: ";

		cin >> n;
		if (n < 0)
			cout << "Ingrese un numero vàlido" << endl; 
			
	} while (n < 0);
	fac=factorial(n); 
	cout << "El factorial de su numero es: " << fac<<endl; 
	cout << "Gracias por su consulta ;)" << endl; 

	return 0; 
}
float factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1); 

}
