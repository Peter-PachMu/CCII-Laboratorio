#include "fechas.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

fechas::fechas(string _nombre, int _Ndia, int _Nmes, int _Nanio, int _Hdia, int _Hmes, int _Hanio)
{
	nombre = _nombre; 
	Ndia = _Ndia;
	Nmes = _Nmes;
	Nanio = _Nanio;
	Hdia = _Hdia;
	Hmes = _Hmes;
	Hanio = _Hanio;
}

void fechas::edad() {

	cout << "\nFecha Actual: "<<Hdia<<"/"<<Hmes<<"/"<<Hanio<< endl;

	cout << "Nombre:\t\t" << nombre<<endl;

	int edad = Hanio - Nanio;

	if (Hmes < Nmes) {
		edad -= 1;
	}
	else if (Hmes==Nmes) {
		if (Hdia < Ndia) {
			edad -= 1;
		}
	}
	cout << "Edad Actual:\t" << edad<<" anios"<<endl;
}

