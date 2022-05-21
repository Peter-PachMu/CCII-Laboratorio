#include "Prestamo.h"
#include <iostream>
#include <string>

using namespace std;

Prestamo::Prestamo(string _cliente, double _saldo, int _numProductos) : ProductoBancario(_cliente, _saldo, _numProductos)
{
}

Prestamo::~Prestamo()
{
}

void Prestamo::imprimirP()
{
	imprimirPB();
	cout << "-- Ingreso a Prestamo --" << endl;
}