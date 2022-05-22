#include "Circulo.h"
#include <iostream>

using namespace std;

Circulo::Circulo(string _nombre, string _color, double _cx, double _cy, double _rMayor, double _rMenor) : Elipse(_nombre, _color, _cx, _cy, _rMayor, _rMenor)
{
}
Circulo::~Circulo()
{
}
void Circulo::imprimir()
{
	if (rMayor == rMenor){
		Elipse::imprimir();
		Elipse::eArea();
	}
	else {
		cout << "Posee dos Radios diferentes por lo tanto no es un Circulo" << endl;
	}
}