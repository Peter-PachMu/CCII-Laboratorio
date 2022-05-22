#include "Forma.h"
#include <iostream>
#include <string>

using namespace std;

Forma::Forma(string _nombre, string _color, double _cx, double _cy)
{
	nombre = _nombre;
	color = _color;
	cx = _cx;
	cy = _cy;
}
Forma::~Forma()
{
}
void Forma::imprimir() {
	cout << "Forma: " << nombre <<endl;
	cout << "Color: " << color << endl;
	cout << "Centro(coordenadas):" << endl;
	cout << "Eje X = " << cx << endl;
	cout << "Eje Y = " << cy << endl;
}
void Forma::cambioCentro() {
	cout << "Cambio de Coordenadas... " << endl;
	cout << "Nuevo Coor. en X : ";cin >> cx;
	cout << "Nuevo Coor. en Y : ";cin >> cy;
}

void Forma::cambioColor() {
	cout << "Cambio de Color... " << endl;
	cout << "Nuevo Color: ";cin >> color;
}