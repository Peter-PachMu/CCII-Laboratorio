#include "operacionFactorial.h"
#include <iostream>

using namespace std;

operacionFactorial::operacionFactorial(int _operador) : operacionBase(_operador)
{
}
operacionFactorial::~operacionFactorial()
{
}

int operacionFactorial::devolverFactorial() 
{
	setOperador(operador);
	int cant = 1;
	for (int i = 1;i <= operador;i++) {
		cant = i * cant;
	}
	return cant;
}