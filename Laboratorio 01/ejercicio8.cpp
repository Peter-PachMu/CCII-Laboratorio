#include <iostream>

using namespace std;

int main(){
    
    int lista[100];

    int contador;
    float sumatoria=0,resultado;

    cout<<"Cantidad de numeros a ingresar: ";cin>>contador;

    for(int i=0;i<contador;i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>lista[i];
        sumatoria=sumatoria+lista[i];
    }
    resultado=sumatoria/contador;

    cout<<"La MEDIA de los numeros ingresados es: "<<resultado;

    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */