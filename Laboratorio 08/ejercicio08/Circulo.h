#pragma once
#include "Elipse.h"
#include <iostream>

using namespace std;
class Circulo : public Elipse
{
public:
	Circulo(string, string, double, double, double, double);
	~Circulo();
	void imprimir();
};

