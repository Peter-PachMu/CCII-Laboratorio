#pragma once
#include <iostream>
#include <string>

using namespace std;

class alumno
{
private:
	int CUI;
	string nombre;
	double nota1;
	double nota2;
	double nota3;

public:
	alumno(int, string, double, double, double);

	void datosPersonales();
	double promedio();
	void calificacion();
};

