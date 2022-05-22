#include "Cuadrado.h"
#include <iostream>

using namespace std;

Cuadrado::Cuadrado(string _nombre, string _color, double _cx, double _cy, double _Lmayor, double _Lmenor) : Rectangulo(_nombre, _color, _cx, _cy, _Lmayor, _Lmenor)
{
}
Cuadrado::~Cuadrado()
{
}
void Cuadrado::imprimir() {
	if (Lmayor == Lmenor) {
		Rectangulo::imprimir();
		Rectangulo::recArea();
	}

	else {
		cout << "Los lados no miden igual por lo tanto no es Cuadrado" << endl;
	}
}