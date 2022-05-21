#include "cuentajoven.h"
#include "Hipoteca.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cuentajoven joven1("Peter", 12.5, 5);
    joven1.imprimirCJ();

    cout << endl;

    Hipoteca joven2("Smith", 50, 3);
    joven2.imprimirH();
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/
