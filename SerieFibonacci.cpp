
#include <iostream>
using namespace std; 

int fibo(int n); 
int main()
{
    int n, fibonacci; 

    do {
        cout << "Ingrese la cantidad de veces a sumar: "; 
        cin >> n; 
        if (n <= 0)
            cout << "Ingrese una cantidad válidad" << endl; 
    } while (n <= 0);
    fibonacci = fibo(n); 
    cout << "Su numero de fibonacci es: " << fibonacci; 

}
int fibo(int n) {
    if (n <=1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2); 
}
