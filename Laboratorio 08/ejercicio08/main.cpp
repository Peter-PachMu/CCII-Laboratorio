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
	figura[2] = new Elipse("Elipse", "Morado", 10, 5, 15, 10);
	figura[3] = new Circulo("Circulo", "Rojo", 5.5, 6, 7, 7);

	double areaMaxima=0;
	auto a = figura[0]; //Solo para inicializar la variable

	//Bucle

	for (int i = 0;i < 4;i++) {
		cout << "Figura" << i+1 << endl;
		figura[i]->cambioColor("Azul");
		cout << endl;
		figura[i]->cambioCentro(20.3,10.6);
		figura[i]->imprimir();
		cout << endl;
		//Implentacion del ejercicio 8 Area Maxima e Informacion
		if (figura[i]->a() > areaMaxima) {
			areaMaxima = figura[i]->a();
			a = figura[i];
		}
	}

	cout << "--- Implementacion para Determinar la Forma con Mayor Area---" << endl;
	cout << "** Es la forma con mayor area maxima con un Total de: " << areaMaxima << " **" << endl;
	a->imprimir();
	
	
}
/*  
Alumno:Peter Smith Pacherres Muñoz
CUI: 20213134   
*/



