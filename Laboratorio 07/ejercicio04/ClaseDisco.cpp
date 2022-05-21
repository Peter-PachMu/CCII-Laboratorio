#include "ClaseDisco.h"
#include <iostream>
#include <string>

using namespace std;

ClaseDisco::ClaseDisco(string _titulo, string _autor, string _formato, string _calidad, int _minutos, string _tipo) : ClaseMultimedia(_titulo, _autor, _formato, _calidad, _minutos)
{
	tipo = _tipo;
}
ClaseDisco::~ClaseDisco()
{
}
void ClaseDisco::info()
{
	datos();
	cout << "** Disco **" << endl;
	cout << "Tipo: " << tipo << endl;
	cout << endl;
}