#pragma once
#include "ProductoBancario.h"
#include <iostream>
#include <string>

using namespace std;

class Prestamo : public ProductoBancario
{
protected:
public:
	Prestamo(string, double, int);
	~Prestamo();
	void imprimirP();
};