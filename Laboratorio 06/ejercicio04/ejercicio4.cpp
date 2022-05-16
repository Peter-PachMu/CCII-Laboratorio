#include "almacenamiento.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "\t*****ALMACENAMIENTO*****" << endl;
	vector<int> arreglo;

	almacenamiento capacidad = almacenamiento(arreglo);
	int opcion;

	cout << "\t---MENU---" << endl;
	cout << "1 -> Ingresar dato\n2 -> Verificar espacio e ingresar dato" << endl;
	cout << "3 -> Borrar dato\n4 -> Mostrar Arreglo\n5 -> SALIR" << endl;

	while (1 == 1) {
		cout << "\nQue OPCION desea realizar: " ;cin >> opcion;
		cout << endl;
		switch (opcion)
		{
		case 1:
			capacidad.ingresar();
			break;
		case 2:
			capacidad.vrfEspacio();
			break;
		case 3:
			capacidad.borrar();
			break;
		case 4:
			capacidad.mostrar();
			break;
		case 5:
			cout << "SALISTE DEL PROGRAMA..." << endl;
			exit(EXIT_SUCCESS);
			break;
		default:
			cout << "Opcion elegida no es valida" << endl;
			break;
		}
	}	
	return 0;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/