#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string palabra;
    int longitud;

    cout<<"\tPalabras al REVES"<<endl;

    cout<<"Ingrese la palabra: ";cin>>palabra;

    longitud=palabra.length();

    cout<<"Resultado: "<<endl;

    for(int i=longitud;i>=0;i--){
        cout<<palabra[i];
    }

    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */