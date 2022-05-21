#include "Hipoteca.h"
#include <iostream>
#include <string>
using namespace std;

Hipoteca::Hipoteca(string _cliente, double _saldo, int _numProductos) : Prestamo(_cliente, _saldo, _numProductos)
{
}
Hipoteca::~Hipoteca()
{
}

void Hipoteca::imprimirH()
{
	imprimirP();
	cout << "--- Ingreso a Hipoteca ---" << endl;
}