
#include <iostream>
using namespace std;
int sumR(int n);
int main()
{
    int n, suma;

    do {
        cout << "Ingrese la cantidad de veces a sumar: ";
        cin >> n;
        if (n <= 0)
            cout << "Ingrese una cantidad válidad" << endl;
    } while (n <= 0);
    suma = sumR(n);
    cout << "Su suma de los n numeros es: " << suma;
    return 0;
}
int sumR(int n) {
    if (n == 1)
        return n;
    else
        return sumR(n - 1)+n;
}
