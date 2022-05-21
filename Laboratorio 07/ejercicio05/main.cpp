#include "operacionFactorial.h"
#include <iostream>

using namespace std;

int main()
{
    int oper;

    cout << "Digite el numero: ";cin >> oper;

    operacionFactorial num(oper);
    cout << "Factorial de " << num.getOperador() << endl;
    cout << "Resultado: " << num.devolverFactorial() << endl; 
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/
