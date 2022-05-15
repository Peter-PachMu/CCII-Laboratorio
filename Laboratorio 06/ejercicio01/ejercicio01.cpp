#include <iostream>
#include "datos.h"

using namespace std;

int main() {

    double base, altura;

    cout<<"\tArea Y Perimetro de un RECTANGULO"<<endl;
    cout<<"Base = ";cin>>base;
    cout<<"Altura = ";cin>>altura;

    datos rectangulo = datos(base,altura);
    rectangulo.area();
    rectangulo.perimetro();

    return 0;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/