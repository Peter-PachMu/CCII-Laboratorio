#include "alumno.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

alumno::alumno(int _CUI, string _nombre, double _nota1, double _nota2, double _nota3)
{
	CUI = _CUI;
	nombre = _nombre;
	nota1 = _nota1;
	nota2 = _nota2;
	nota3 = _nota3;
}

void alumno::datosPersonales() {
	//obtenemos la primera palabra separada por ' ' 
	stringstream input_stringstream(nombre);
	string pNombre;
	getline(input_stringstream, pNombre, ' ');

	cout << "CUI:\t\t" << CUI<<endl;
	cout << "Primer nombre:\t" << pNombre << endl;
}


double alumno::promedio() {
	double resultado;
	
	resultado = (nota1 + nota2 + nota3) / 3;

	return (resultado);
}
void alumno::calificacion() {
	double nota= alumno::promedio();
	cout << "Asignatura: Ciencia de la Computacion II" << endl;
	if (nota >= 10.5) {
		cout << "Alumno --> Aprobado -- con: " << nota << endl;
	}
	else {
		cout << "Alumno --> DESAPROBADO -- con: " << nota << endl;
	}
}