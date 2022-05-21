#pragma once
#include "Cuenta.h"
#include <iostream>
#include <string>

using namespace std;

class cuentajoven : public Cuenta
{
private:
public:
	cuentajoven(string, double, int);
	~cuentajoven();
	void imprimirCJ();
};

