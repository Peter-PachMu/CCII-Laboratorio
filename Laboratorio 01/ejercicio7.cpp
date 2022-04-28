#include <iostream>

using namespace std;

int main(){
    
    
    int num1, num2;

    cout<<"Averiguar si un numero es divisor del otro\n";

    cout<<"Ingrese el Primer numero: ";cin>>num1;
    cout<<"Ingrese el Segundo numero: ";cin>>num2;
    if(num1%num2==0){
        cout<<"\nEl "<<num2<<" es SI es divisor de "<<num1;
    }
    else{
        cout<<"\nEl "<<num2<<" es NO es divisor de "<<num1;
    }
    
    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */