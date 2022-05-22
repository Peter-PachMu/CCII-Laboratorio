#include "Rectangulo.h"
#include <iostream>
#include <string>

using namespace std;

Rectangulo::Rectangulo(string _nombre, string _color, double _cx, double _cy, double _Lmayor, double _Lmenor): Forma(_nombre,_color, _cx,_cy)
{
	Lmayor = _Lmayor;
	Lmenor = _Lmenor;
}
Rectangulo::~Rectangulo()
{
}

void Rectangulo::imprimir()
{
	Forma::imprimir();
	cout << "Lado Mayor: " << Lmayor << endl;
	cout << "Lado Menor: " << Lmenor << endl;
}
void Rectangulo::recArea()
{	
	double ar;
	ar = Lmayor * Lmenor;
	cout << "Area: " << ar << endl;
}
void Rectangulo::recPerim()
{
	double per;
	per = (Lmayor*2)+(2 * Lmenor);
	cout << "Perimetro: " << per << endl;
}
void Rectangulo::recTamanio()
{
	double escala;
	cout << "Factor de Escala: ";cin >> escala;
	cout << "** Nuevas Medidas ** " << endl;
	Lmayor = Lmayor * escala;
	Lmenor = Lmenor * escala;
	cout << "Lado Mayor: " << Lmayor <<endl;
	cout << "Lado Menor: " << Lmenor <<endl;
} 