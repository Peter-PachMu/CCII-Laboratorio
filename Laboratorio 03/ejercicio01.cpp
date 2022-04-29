#include <iostream>

using namespace std;

int potencia(int n1,int n2);

int main(){

    int numero,poten,resul;

    cout<<"\tPotencia"<<endl;
    cout<<"Ingrese el numero: ";cin>>numero;
    cout<<"Ingrese la potencia: ";cin>>poten;

    resul=potencia(numero,poten);

    cout<<"El resultado de "<<numero<<" al "<<poten<<" es: "<<resul;

    return 0;
}

int potencia(int n1,int n2){
    int resultado=1;
    for(int i=0;i<n2;i++){
        resultado=n1*resultado;
    }
    
    return resultado;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/
