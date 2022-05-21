#include "pato.h"
#include <iostream>

using namespace std;

pato::pato(string _especie, string _pico, string _tipo, string _patas, double _peso) : Ave(_especie, _pico, _tipo, _patas, _peso)
{
}
pato::~pato()
{
}
void pato::nadar()
{
	cout << "El pato esta nadando..." << endl;
}

void pato::parpar()
{
	cout << "El pato esta parpando..." << endl;
}