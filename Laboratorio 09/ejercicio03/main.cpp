#include "correo.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    correo<char,string> usuario('p', "pacherres");

    cout << "Su correo es: " << endl;
    cout << usuario.direccionCorreo() << endl;
}

/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */