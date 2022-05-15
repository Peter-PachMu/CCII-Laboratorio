#include "matriz.h"
#include <iostream>
#include <ctime>

using namespace std;

matriz::matriz(int _fila, int _columna, int _numero)
{
	fila = _fila;
	columna = _columna;
	numero = _numero;
}

bool repeticion(int m[][3], int num) {
	for (int i= 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			if (num == m[i][j]) {
				return false;
			}
		}
	}
	return true;
}

void matriz::crear() {
	
	cout << "Creando la Matriz..."<<endl;

	srand(time(0));
	for (int i = 0;i < fila;i++) {
		for (int j = 0;j < columna;j++) {
			int n = 1 + rand() % 9;
			while (repeticion(m, n) == false) {
				n = 1 + rand() % 9;
			}
			m[i][j] = n;
		}
	}
}

void matriz::mostrar() {
	cout << "Matriz de 3x3" << endl;
	cout << endl;
	for (int i = 0;i < fila;i++) {
		for (int j = 0;j < columna;j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

void matriz::buscar() {
	cout << "\nNumero a encontrar: " << numero<<endl;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			if (m[i][j] == numero) {
				cout << "\nSe encuentra en la posicion: " << endl;
				cout <<"-> "<< i+1 << "x" << j+1 << endl;
			}
		}
	}
}