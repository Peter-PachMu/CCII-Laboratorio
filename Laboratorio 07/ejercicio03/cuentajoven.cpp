#include "cuentajoven.h"
#include <iostream>
#include <string>

using namespace std;

cuentajoven::cuentajoven(string _cliente, double _saldo, int _numProductos) : Cuenta(_cliente, _saldo, _numProductos) 
{
}
cuentajoven::~cuentajoven()
{
}

void cuentajoven::imprimirCJ()
{	
	imprimirC();
	cout << "--- Ingreso a Cuenta Joven ---" << endl;
}