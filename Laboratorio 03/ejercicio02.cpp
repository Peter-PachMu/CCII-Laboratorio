#include <iostream>

using namespace std;

void bisiesto(int fecha);

int main(){
    
    int anio; 

    cout<<"\tANIO BISIESTO"<<endl;
    cout<<"Ingrese el anio: ";cin>>anio;

    bisiesto(anio);

    return 0;
}

void bisiesto(int fecha){
    if(fecha%4==0&&fecha%100!=0){
        cout<<"El anio "<<fecha<<" es Bisiesto.";
        return;
    }
    cout<<"El anio "<<fecha<<" NO es Bisiesto.";
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/