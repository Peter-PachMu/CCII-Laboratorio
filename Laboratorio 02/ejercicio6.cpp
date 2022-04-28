#include <iostream>

using namespace std;

int main(){

    int num,aux=1,inicio=0,resultado;

    cout<<"\tFibonacci"<<endl;
    cout<<"Cantidad de Numeros de Fibonacci: ";cin>>num;
    cout<<"Resultado:"<<endl;

    cout<<inicio;
    //inicio=inicio+aux;
    for(int i=1;i<num;i++){
        resultado=inicio+aux;
        cout<<","<<resultado;
        aux=inicio;
        inicio=resultado;
    }
    cout<<".";
    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */