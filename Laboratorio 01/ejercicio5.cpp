#include <iostream>

using namespace std;

int main(){
    
    float num,decimas;
    int numFinal;

    cout<<"Ingrese un Numero: ";
    cin>>num;
    
    numFinal=num;
    decimas=num-numFinal;

    if(numFinal<0){//Para numeros negativos
        decimas=decimas*-1;
        if(decimas>=0.5){
            numFinal-=1;
            cout<<"Resultado final: "<<numFinal;
        }
        else{
            cout<<"Resultado final: "<<numFinal;
        }
    }
    else if(numFinal>=0&&decimas>=0.5){
        numFinal+=1;
        cout<<"Resultado final: "<<numFinal;
    }
    else{
        cout<<"Resultado final: "<<numFinal;
    }
    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */