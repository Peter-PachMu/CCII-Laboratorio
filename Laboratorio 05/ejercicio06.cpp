#include <iostream>

using namespace std;

int sumar(int a, int b){
    //cout<<"Resultado de la suma: "<<a+b<<endl;
    return (a+b);
}

int restar(int a, int b){
    //cout<<"Resultado de la resta: "<<a-b<<endl;
    return (a-b);
}

int multiplicar(int a, int b){
    //cout<<"Resultado de la multiplicacion: "<<a*b<<endl;
    return (a*b);
}

int dividir(int a, int b){
    //cout<<"Resultado de la division: "<<a/b<<endl;
    return (a/b);
}


int operacion(int a, int b, int (*operador)(int,int))
{
    double resultado;

    resultado = operador(a,b);

    return(resultado);
}


int main(){


    int a = 9 , b =3, resultado; 
    

    resultado=operacion(a,b,sumar);
    
    cout<<"Resultado ="<<resultado;

    return 0;
}


/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/