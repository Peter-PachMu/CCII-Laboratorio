#include "alumno.h"
#include <string>
#include <iostream>
//CLASE DERIVADA
using namespace std;

alumno::alumno()
{
}

alumno::~alumno()
{
}

void alumno::mostrarInfo()
{
	cout << "----- Datos ingresados del Alumno -----" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}