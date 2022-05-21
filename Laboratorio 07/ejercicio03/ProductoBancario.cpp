#include "ProductoBancario.h"
#include <iostream>
#include <string>

using namespace std;

ProductoBancario::ProductoBancario(string _cliente, double _saldo, int _numProductos)
{
	cliente = _cliente;
	saldo = _saldo;
	numProductos = _numProductos;
}
ProductoBancario::~ProductoBancario()
{
}
void ProductoBancario::imprimirPB()
{
	cout << "--- INFORMACION ---" << endl;
	cout << "Cliente: " << cliente << endl;
	cout << "Saldo: " << saldo << endl;
	cout << "N de Producto: " << numProductos << endl;
}