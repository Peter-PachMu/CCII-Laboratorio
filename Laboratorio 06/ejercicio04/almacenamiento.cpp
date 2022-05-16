#include "almacenamiento.h"
#include <iostream>
#include <vector>

using namespace std;

almacenamiento::almacenamiento(vector<int> _arreglo)
{
	arreglo = _arreglo;
}

void almacenamiento::ingresar() {
	if (arreglo.size() < 5) {
		cout << "Ingresar dato: ";cin >> dato;
		arreglo.push_back(dato);
	}
	else {
		cout << "No puede agregar mas datos" << endl;
		cout << "Elimine datos si desea agregar datos" << endl;
	}
	
}

void almacenamiento::vrfEspacio() {
	if (arreglo.size() < 5) {
		cout << "El arreglo tiene espacio disponible" << endl;
		cout << "Puede ingresar dato" << endl;
		ingresar();
	}
	else {
		cout << "!!! El arreglo esta LLENO  !!!"<<endl;
		mostrar();
	}
}

void almacenamiento::borrar(){
	int posicion;
	cout << "Que posicion del arreglo desea eliminar: ";cin >> posicion;
	arreglo.erase(arreglo.begin() + (posicion - 1));
}

void almacenamiento::mostrar() {
	cout << "\t---Almacenamiento Actualizado---" << endl;
	for (int elemento : arreglo) {
		cout << elemento << " ";
	}
	cout << endl;
}