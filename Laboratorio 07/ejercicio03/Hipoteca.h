#pragma once
#include "Prestamo.h"
#include <iostream>
#include <string>

using namespace std;

class Hipoteca:public Prestamo
{
public:
	Hipoteca(string, double, int);
	~Hipoteca();
	void imprimirH();
};