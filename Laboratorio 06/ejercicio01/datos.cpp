#include "datos.h"

#include <iostream>

using namespace std;

datos::datos(double _base, double _altura)
{
    base = _base;
    altura = _altura;
}
/*
datos::~datos()
{
}*/

void datos::area() {
    cout<<"Area = "<<base*altura<<endl;
    //cout << "Area = " << endl;
}

void datos::perimetro() {
    //cout << "Perimetro = " << endl;
    cout<<"Perimetro = "<<(base*2)+(altura*2)<<endl;
}