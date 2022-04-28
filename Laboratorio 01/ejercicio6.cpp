#include <iostream>

using namespace std;

int main(){
    
    int numero, contador=0;
    int binario[9];
    cout<<"Ingrese un numero entre 100 y 999: ";cin>>numero;
    
    while(contador<1){
        if(numero>100&&numero<999){
            contador+=1;
        } 
        else{
            cout<<"DATO INCORRECTO"<<endl;
            cout<<"Ingrese un numero entre 100 y 999: ";cin>>numero;
        }
    }
    for(int i=0;i<9;i++){
        binario[i]=numero%2;
        numero=numero/2;
    }
    cout<<"Resultado de numero a BINARIO: ";
    for(int i=9;i>=0;i--){
        cout<<binario[i];
    }

    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */