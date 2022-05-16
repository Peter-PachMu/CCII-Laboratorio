#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class matriz
{
private:
	int fila, columna, numero;
	int m[][3];

public:

	matriz(int fila, int columna, int numero);
	void crear();
	void mostrar();
	void buscar();
};



