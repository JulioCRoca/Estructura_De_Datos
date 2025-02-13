#pragma once
class Triangulo
{
	private: 
		float base; 
		float altura; 
	public:
		Triangulo(); 
		void set_base(float base); 
		void set_altura(float altura); 
		float get_base(); 
		float get_altura(); 
		float AreaT();
};

