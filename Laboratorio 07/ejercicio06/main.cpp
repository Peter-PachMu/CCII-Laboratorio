#include "ganso.h"
#include "pato.h"
#include "gallina.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ganso gan1("Anserinae", "Redondeado", "Volardor acuatico", "Empalmado", 3.3);
    gan1.informacion();
    cout << "\tAcciones" << endl;
    gan1.graznar();
    gan1.nadar();

    pato pat1("Anatidae", "Redondeado", "Acuatico", "Empalmado", 1.6);
    pat1.informacion();
    cout << "\tAcciones" << endl;
    pat1.nadar();
    pat1.parpar();

    gallina gall1("Gallus gallu Domesticus", "En Punta", "Terrestre", "Garra", 2);
    gall1.informacion();
    cout << "\tAcciones" << endl;
    gall1.empollando();
    gall1.cacareo();

}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/
