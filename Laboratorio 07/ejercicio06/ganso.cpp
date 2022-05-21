#include "ganso.h"
#include <iostream>

using namespace std;

ganso::ganso(string _especie, string _pico, string _tipo, string _patas, double _peso): Ave(_especie,  _pico, _tipo, _patas, _peso)
{
}
ganso::~ganso()
{
}
void ganso::nadar()
{
	cout << "El ganso esta nadando..." << endl;
}

void ganso::graznar() 
{
	cout << "El ganso esta graznando..." << endl;
}