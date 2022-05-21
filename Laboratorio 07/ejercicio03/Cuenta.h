#pragma once
#include "ProductoBancario.h"
#include <iostream>
#include <string>

using namespace std;

class Cuenta: public ProductoBancario
{
public:
	Cuenta(string, double, int);
	~Cuenta();
	void imprimirC();
};