#include "Cuenta.h"
#include <iostream>
#include <string>

using namespace std;

Cuenta::Cuenta(string _cliente, double _saldo, int _numProductos) : ProductoBancario(_cliente, _saldo, _numProductos)
{
}

Cuenta::~Cuenta()
{
}

void Cuenta::imprimirC()
{
	imprimirPB();
	cout << "-- Ingreso a Cuenta --" << endl;
}