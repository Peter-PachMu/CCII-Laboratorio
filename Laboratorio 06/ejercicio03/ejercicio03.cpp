#include "fechas.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    string nombre;
    int dia, mes, anio;
    int Adia, Ames, Aanio;
    cout << "\tCalculo de Edad\n";
    cout << "Ingrese fecha de Nacimiento:" << endl;
    cout << "Dia: ";cin >> dia;
    cout << "Mes: ";cin >> mes;
    cout << "Anio: ";cin >> anio;

    //Obtenemos la fecha actual
    time_t t;
    t = time(NULL);
    struct tm *hoy;
    hoy = localtime(&t);
    Adia = hoy->tm_mday;
    Ames = hoy->tm_mon + 1;
    Aanio = hoy->tm_year + 1900;

    fechas paciente1 = fechas("Peter", dia, mes, anio, Adia , Ames, Aanio);
       
    paciente1.edad();

    return 0;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/
