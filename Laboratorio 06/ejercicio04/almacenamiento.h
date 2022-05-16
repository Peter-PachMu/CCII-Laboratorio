#pragma once
#include <iostream>
#include <vector>

using namespace std;

class almacenamiento
{
private:
	vector<int> arreglo;
	int dato;

public:
	almacenamiento(vector<int>);

	void ingresar();
	void vrfEspacio();
	void borrar();
	void mostrar();

};

