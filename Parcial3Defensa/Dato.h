#pragma once
#include <string>
using namespace std;
#include <iostream>
class Dato
{
	private:
		int cantidad;
		string nombre; 
		int id; 
	public:
		Dato();
		void setCantidad(int cantidad);
		void setNombre(string nombre);
		void setId(int id);
		int getCantidad();
		string getNombre();
		int getId();
		
};

