#pragma once
#include "Forma.h"
class Rectangulo:public Forma
{
protected:
	double Lmayor, Lmenor;
public:
	Rectangulo(string, string, double, double, double, double);
	~Rectangulo();
	void imprimir();
	virtual void Area();
	void recPerim();
	void recTamanio(); //Funcion parecida a escalar un objeto
};

