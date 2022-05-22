#include "Cuadrado.h"
#include "Rectangulo.h"
//#include "Elipse.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Primer Caso Lados Distintos" << endl;
	Cuadrado cua1("Cuadrado", "Morado", 5, 4.5, 10, 5.5);
	cua1.imprimir();
	cout << endl;
	cout << "Segundo Caso Lados correctos a un Cuadrado" << endl;
	Cuadrado cua2("Cuadrado", "Amarillo", 5, 4.5, 3.3, 3.3);
	cua2.imprimir();
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */