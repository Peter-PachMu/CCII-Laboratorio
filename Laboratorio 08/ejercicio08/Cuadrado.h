#pragma once
#include "Rectangulo.h"
#include <iostream>

using namespace std;

class Cuadrado:public Rectangulo
{
public:
	Cuadrado(string , string , double , double, double, double);
	~Cuadrado();
	void imprimir();
};

