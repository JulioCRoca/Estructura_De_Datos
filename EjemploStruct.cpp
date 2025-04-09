// planilla.cpp : Defines the entry point for the console application.
//
// Librerias
#include <iostream>
#include <string>
// colocar las constantes declarados a nivel del compilador
#define MAX 100
using namespace std; 

struct t_empleados
{
	int id;
	string nombre, fechanac;
	float sb, sn;
};

t_empleados empleados[MAX];

//Prototipos
void cargarvector(t_empleados v[], int n);
void clasificarburbuja(t_empleados v[], int n);
bool busquedacodigo(t_empleados v[], int n, int clave, int& z);
void listarplanilla(t_empleados v[], int n);
float salarioneto(float sb, int des);
float promedio(t_empleados v[], int n);

// El cuerpo principal
void main()
{
	int opcion,N,codigo,pos, desc; 
	bool bandera; 
	
	// declaraciones de todas las variables que se usan
	// Menú
	do {

		// Se muestran las opciones del menú
		cout << "=======Menu========" << endl;
		cout << "1. Cargar planilla" << endl;
		cout << "2.Clasificar planilla" << endl;
		cout << "3.Buscar codigo" << endl;
		cout << "4.Mostrar planilla" << endl;
		cout << "5.Salario neto" << endl;
		cout << "6.Promedio salario" << endl;
		cout << "0.Salir" << endl;
		cin >> opcion;
		// determina de acuerdo a la opcion que debe ejecutarse
		switch (opcion)
		{
		case 1:
			do {
				cout << "Ingrese la cantidad de empleados: "; 
				cin >> N; 
			} while (N > MAX || N < 0);
			cargarvector(empleados, N);
			break;
		case 2:
			clasificarburbuja(empleados, N);
			break;
		case 3:
			cout << "Ingreso el codigo a buscar";
			cin >> codigo;
			bandera = busquedacodigo(empleados, N, codigo, pos);
			if (bandera) {
				cout << "Codigo: " << empleados[pos].id;
				cout << "Nombre: " << empleados[pos].nombre;
				cout << "Fecha Nacimiento: " << empleados[pos].fechanac;
				cout << "SalarioBruto: " << empleados[pos].sb;
			}
			else
				cout << " No existe el codigo del empleado" << endl;
			break;
		case 4:
			// Listar planilla
			cout << "\t Planilla de Sueldos\n";
			listarplanilla(empleados, N); 
			cout << "Promedio: " << promedio(empleados, N);
		case 5:
			cout << "Ingrese su codigo para verificar: ";
			cin >> codigo;
			bandera=bandera = busquedacodigo(empleados, N, codigo, pos);
			if (bandera) {
				cout << "Empleado encontrado";
				cout << "Ingrese el descuento del salario"; 
				cin >> desc; 
				empleados[pos].sn = salarioneto(empleados[pos].sb,desc);
			}
			else {
				cout << "El empleado no existe" << endl;
			}
			break; 
		case 6: 
			cout << "El promedio de la planilla es: " << promedio(empleados, N);
			break; 
		default: 
			cout << "Error. " << endl; 
		}
			
	} while (opcion != 0);
		 
		 
}
void cargarvector(t_empleados v[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Empleado " << i + 1; 
		cout << "Ingrese el codigo del empleado: "; 
		cin >> v[i].id;
		cout << "Ingrese el nombre del empleado: "; 
		cin.ignore(); 
		getline(cin, v[i].nombre); 
		cout << "Ingrese la fecha de nacimiento(DD/MM/AA):"; 
		getline(cin, v[i].fechanac); 
		cout << "Ingrese el salario bruto del empleado"; 
		cin >> v[i].sb;
	}
}
void clasificarburbuja(t_empleados v[], int n) {
	int aux; 
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if(v[i].id>v[j].id){
				aux = v[i].id; 
				v[i].id = v[j].id; 
				v[j].id = aux; 
			}
		}
	}
}
bool busquedacodigo(t_empleados v[], int n, int clave, int& z) {
	for (int i = 0; i < n; i++) {
		if (clave == v[i].id) {
			z = i; 
			return true; 
		}
		else {
			return false; 
		}
	}
}
void listarplanilla(t_empleados v[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nombre \t\t\t Codigo \t\t\t Fecha de nacimiento \t\t Salario bruto \t\t Salario neto" << endl;
		cout << "===========================================================" << endl;
		cout << v[i].nombre << "\t\t\t" << v[i].id << "\t\t\t" << v[i].fechanac << "\t\t" << v[i].sb << "\t\t" << v[i].sn<< endl;
	}
}
float salarioneto(float sb, int desc) {
	return sb - (sb * (desc/100)); 
	
}
float promedio(t_empleados v[], int n){
	float suma=0; 
	for (int i = 0; i < n; i++) {
		suma = suma + v[i].sn; 
	}
	return suma / n; 
}