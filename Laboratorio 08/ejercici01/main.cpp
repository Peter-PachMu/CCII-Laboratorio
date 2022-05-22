#include "Rectangulo.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Rectangulo	rec1("Rectangulo","Azul",5,4.5,10,5.5);
	rec1.imprimir();
	rec1.cambioColor();
	rec1.cambioCentro();
	rec1.imprimir();
	rec1.recArea();
	rec1.recPerim();
	rec1.recTamanio();
	rec1.imprimir();
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */