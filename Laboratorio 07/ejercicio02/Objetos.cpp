#include "Objetos.h"
#include <iostream>
#include <string>

using namespace std;

Objetos::Objetos(int _red, int _green, int _blue , string _rgb, string _elemento, string _obj): Color(_red,_blue,_green,_rgb),Material(_elemento)
{
	obj = _obj;
}
Objetos::~Objetos()
{
}

void Objetos::resultado()
{
	cout << "---- Informacion del Objeto ----" << endl;
	cout << obj << " de color " << rgb << " y material de " << elemento << endl;
	//adicional al ejercicio
	cout << "Composicion del color:" << endl;
	cout << "R:\t" << red << "\nG:\t" << green << "\nB:\t" << blue << endl;
}