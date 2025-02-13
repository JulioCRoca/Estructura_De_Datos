
#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"

using namespace std; 
int main()
{
    float base, altura, radio, lado; 
    int opcion; 
    Circulo circulito;
    Cuadrado cuadrado1;
    Triangulo triangulo1;
    do {
        cout << endl << "Menu" << endl; 
        cout << "1.Area circulo" << endl; 
        cout << "2.Area cuadrado" << endl;
        cout << "3.Area triangulo" << endl;
        cout << "0. Salir" << endl; 
        cout << "Ingrese la operacion qye prefiere usar: ";
        cin >> opcion;
        if (opcion < 0) {
            cout << "Opcion invalida"<<endl; 
        }
        switch (opcion){
        case 1:
            
            cout << "Ingrese el radio del circulo: "; 
            cin >> radio; 
            circulito.set_radio(radio); 
            cout << "El area del circulo es: " << circulito.CalcularArea()<<endl; 
            break;
        case 2:
           
            cout << "Ingrese el lado del cuadrado: "; 
            cin >> lado; 
            cuadrado1.set_lado(lado); 
            cout << "El area del cuadrado: " << cuadrado1.AreaCuadrado()<<endl; 
            break;
        case 3: 
             
            cout << "Ingrese la base del triangulo: ";
            cin >> base; 
            cout << "Ingrese la altura del triangulo: "; 
            cin >> altura; 
            triangulo1.set_base(base); 
            triangulo1.set_altura(altura); 
            cout << "El area del triangulo es: " << triangulo1.AreaT()<<endl;
            break;
        case 0: 
            cout << "Saliendo...." << endl; 
            break;

        default:
            cout << "Ingrese una opcion valida >:("<<endl; 
            break;
        }
    } while (opcion < 0 || opcion != 0); 
    return 0; 
}

