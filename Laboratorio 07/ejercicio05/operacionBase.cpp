#include "operacionBase.h"

operacionBase::operacionBase(int _operador)
{
	operador = _operador;
}

operacionBase::~operacionBase()
{
}

void operacionBase::setOperador(int _operador) 
{
	operador = _operador;
}
int operacionBase::getOperador()
{
	return operador;
}