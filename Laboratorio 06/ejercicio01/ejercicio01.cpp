#include <iostream>
#include "datos.h"


using namespace std;


int main() {

    //double base = 3, altura= 5;
    double base, altura;

    cout<<"\tArea Y Perimetro de un RECTANGULO"<<endl;
    cout<<"Base = ";cin>>base;
    cout<<"Altura = ";cin>>altura;

    datos rectangulo = datos(base,altura);
    //datos rectangulo = datos(3, 4);
    rectangulo.area();
    rectangulo.perimetro();


    return 0;
}