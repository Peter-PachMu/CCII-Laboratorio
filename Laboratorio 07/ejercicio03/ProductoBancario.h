#pragma once
#include <iostream>
#include <string>

using namespace std;

class ProductoBancario
{
protected:
	string cliente;
	double saldo;
	int numProductos;
public:
	ProductoBancario(string, double, int);
	~ProductoBancario();
	void imprimirPB();
};

