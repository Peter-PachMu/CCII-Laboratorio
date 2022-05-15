#include <iostream>

using namespace std;

int main(){

    int n1, n2,*aux;

    n1=10;
    n2=20;

    cout<<"\tValor Incicial"<<endl;
    cout<<"Valor de n1 = "<<n1<<endl;
    cout<<"Valor de n2 = "<<n2<<endl;
    cout<<"\tIntercambio"<<endl;

    *aux=n1;
    n1=n2;
    n2=*aux;

    cout<<"Valor de n1 = "<<n1<<endl;
    cout<<"Valor de n2 = "<<n2<<endl;

    return 0;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/