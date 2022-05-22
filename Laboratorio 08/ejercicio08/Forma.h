#pragma once
#include <iostream>
#include <string>

using namespace std;

class Forma
{
protected:
	string color;
	string nombre;
	double cx, cy; //Centro Geometrico
public:
	Forma(string, string, double, double);
	~Forma();
	virtual void imprimir();
	void cambioColor(string);
	void cambioCentro(double, double);
	virtual double a();//area Implentacion del ejercicio 8 
};

