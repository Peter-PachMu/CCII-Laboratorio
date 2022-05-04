#include <iostream>
#include <string>

using namespace std;

int main(){

    string nombre[3], apellido[3], dni[3];
    int edad[3];

    for(int i=0;i<3;i++){
        cout<<"Ingrese los datos de la Persona "<<i+1<<endl;
        cout<<"Nombre: ";cin>>nombre[i];
        cout<<"Apellido: ";cin>>apellido[i];
        cout<<"DNI: ";cin>>dni[i];
        cout<<"Edad: ";cin>>edad[i];
    }

    cout<<"\nDatos de las Personas"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Persona"<<i+1<<endl;
        cout<<"Nombre: "<<nombre[i]<<endl;
        cout<<"Apellido: "<<apellido[i]<<endl;
        cout<<"DNI: "<<dni[i]<<endl;
        cout<<"Edad: "<<edad[i]<<endl;
    }

    return 0;
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/