#pragma once
#include "Forma.h"

class Elipse:public Forma
{
private:
	double rMayor, rMenor;
public:
	Elipse(string, string, double, double, double, double);
	~Elipse();
	void imprimir();
	void eArea();
};

