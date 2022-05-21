#include "ClaseMultimedia.h"
#include <iostream>
#include <string>

using namespace std;

ClaseMultimedia::ClaseMultimedia(string _titulo, string _autor, string _formato, string _calidad, int _minutos)
{
	titulo = _titulo;
	autor = _autor;
	formato = _formato;
	calidad = _calidad;
	minutos = _minutos;
}

ClaseMultimedia::~ClaseMultimedia()
{
}

void ClaseMultimedia::datos()
{
	cout << "-- Datos Multimedia -- " << endl;
	cout << "Titulo: " << titulo << endl;
	cout << "Autor: " << autor << endl;
	cout << "Formato: " << formato << endl;
	cout << "Calidad: " << calidad << endl;
	cout << "Minutos: " << minutos << endl;
}