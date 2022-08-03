#include <iostream>
#include "calculadora.h"
using  namespace std;


int main() {

    calculadora <int, float> numeros(20, 3.8);

    cout << "La suma es: " << numeros.suma() << endl;
    cout << "La resta es: " << numeros.resta() << endl;
    cout << "La multiplicacion es: " << numeros.multiplica() << endl;
    cout << "La division es: " << numeros.division() << endl;

    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */