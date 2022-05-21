
#include "Ave.h"
#include <iostream>
#include <string>

using namespace std;

Ave::Ave(string _especie, string _pico, string _tipo, string _patas, double _peso)
{
	especie = _especie;
	pico = _pico;
	tipo = _tipo;
	patas = _patas;
	peso = _peso;
}
Ave::~Ave()
{
}

void Ave::informacion() 
{
	cout << "\t-- Ficha Tecnica --" << endl;
	cout << "Especie: " << especie << endl;
	cout << "Pico: " << pico  << endl;
	cout << "Tipo: " <<  tipo << endl;
	cout << "Tipo de Pata: " << patas << endl;
	cout << "Peso Promedio (kg): " << peso << endl;
}