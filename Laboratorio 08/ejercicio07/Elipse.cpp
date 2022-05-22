#include "Elipse.h"
#include <iostream>
#include <string>

using namespace std;
Elipse::Elipse(string _nombre, string _color, double _cx, double _cy, double _rMayor, double _rMenor) :Forma(_nombre, _color, _cx, _cy)
{
	rMayor = _rMayor;
	rMenor = _rMenor;
}
Elipse::~Elipse()
{
}
void Elipse::imprimir() 
{
	Forma::imprimir();
	cout << "Radio Mayor: " << rMayor << endl;
	cout << "Radio Menor: " << rMenor << endl;
	Elipse::Area();
}
void Elipse::Area() 
{	
	double area;
	area = 3.14 * (rMayor * rMenor);
	cout << "Area del Elipse: " << area <<endl;
}
