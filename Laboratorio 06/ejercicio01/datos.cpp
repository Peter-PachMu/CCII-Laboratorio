#include "datos.h"
#include <iostream>

using namespace std;

datos::datos(double _base, double _altura)
{
    base = _base;
    altura = _altura;
}

void datos::area() {
    cout<<"Area = "<<base*altura<<endl;
}

void datos::perimetro() {
    cout<<"Perimetro = "<<(base*2)+(altura*2)<<endl;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/