#include <iostream>
#include "operadores.h"

using namespace std;

int main()
{
    Operador <int, float> num(10, 2.5);

    cout << "La suma es: " << num.suma() <<endl;
    cout << "La resta es: " << num.resta() << endl;
    cout << "La multiplicacion es: " << num.multiplica() << endl;
    cout << "La division es: " << num.division() << endl;
   
    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */