/*Falta terminar*/

#include <iostream>

using namespace std;

bool numero_entre(int n);

bool par(int n);

int sumatoria_impar(int n);

int main(){
        
    int n,sumatoria=0;

    cout<<"Ingrese un numero: ";cin>>n;
    
    while(numero_entre(n)==false){
        cout<<"DATO INCORRECTO"<<endl;
        cout<<"Ingrese un numero: ";cin>>n;
    }
    par(n);


    /*if(n>=0&&n<=100){
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                
            }
        }
    }  */

    return 0;
}

bool numero_entre(int n){
    if(n>=0&&n<=100){
        return true;
    }
    else{   
        return false;
    }
}

bool par(int n){
    if(n%2==0){
        cout<<"Si es un numero Par"<<endl;
        return true;
    }   
    else{
        while(numero_entre(n)==false){
            cout<<"DATO INCORRECTO"<<endl;
            cout<<"Ingrese un numero: ";cin>>n;
        } 
    } 
}


/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/