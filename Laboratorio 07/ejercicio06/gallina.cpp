#include "gallina.h"
#include <iostream>

using namespace std;

gallina::gallina(string _especie, string _pico, string _tipo, string _patas, double _peso) : Ave(_especie, _pico, _tipo, _patas, _peso)
{
}
gallina::~gallina()
{
}
void gallina::empollando()
{
	cout << "La gallina esta empollando sus huevos" << endl;
}

void gallina::cacareo()
{
	cout << "La gallina esta cacareando..." << endl;
}