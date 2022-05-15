#include <iostream>
#include "alumno.h"
#include <string>

using namespace std;

int main() {

    cout << "\tCalificacion UNSA\n"<<endl;

    alumno alm1 = alumno(20213134, "Peter Pacherres Muñoz", 15, 15, 20);

    alm1.datosPersonales();
    alm1.promedio();
    alm1.calificacion();
    
    cout << endl;

    alumno alm2 = alumno(20213135, "Pepito Perez", 05, 06, 18);

    alm2.datosPersonales();
    alm2.promedio();
    alm2.calificacion();

    return 0;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/