#include "Circulo.h"
//#include "Cuadrado.h"
//#include "Rectangulo.h"
#include "Elipse.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Caso Circulo" << endl;
	Circulo cir1("Circulo", "Marron", 3, 5, 6, 6);
	cir1.imprimir();
}