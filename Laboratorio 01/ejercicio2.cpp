#include <iostream>

using namespace std;

int main(){
    
    string nombre,apePaterno,apeMaterno,correofinal;
    string correo = "@unsa.edu.pe";
    cout<<"Ingrese su PRIMER Nombre: ";cin>>nombre;
    cout<<"Ingrese su Apellido PATERNO: ";cin>>apePaterno;
    cout<<"Ingrese su Apellido MATERNO: ";cin>>apeMaterno;
    
    //Generacion del Correo
    correofinal=nombre[0]+apePaterno+apeMaterno[0]+correo;

    cout<<"\n\nCorreo UNSA del alumno: "<<correofinal;

    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */