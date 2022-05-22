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
void Forma::cambioCentro(double _cx, double _cy) {
	cx = _cx;
	cy = _cy;
	cout << "Cambio de Coordenadas... " << endl;
	cout << "Nuevo Coor. en X : "<< cx << endl;
	cout << "Nuevo Coor. en Y : "<< cy << endl;
}

void Forma::cambioColor(string _color) {
	color = _color;
	cout << "Cambio de Color... " << endl;
	cout << "Nuevo Color: "<<color;
}

double Forma::a() //Implentacion del ejercicio 8 
{
	return 0;
}