#include "Circulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Elipse.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Forma* figura[4];

	figura[0] = new Rectangulo("Rectangulo", "Verde", 4.5,3, 5, 3.5);
	figura[1] = new Cuadrado("Cuadrado", "Amarillo", 8,2, 3.5, 3.5);
	figura[2] = new Elipse("Elipse", "Morado",10, 5, 8, 3.2);
	figura[3] = new Circulo("Circulo", "Rojo", 5.5, 6, 7, 7);

	//Bucle

	for (int i = 0;i < 4;i++) {
		cout << "Figura" << i+1 << endl;
		figura[i]->cambioColor("Azul");
		cout << endl;
		figura[i]->cambioCentro(20.3,10.6);
		figura[i]->imprimir();
		cout << endl;
	}
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/