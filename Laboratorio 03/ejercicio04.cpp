#include <iostream>

using namespace std;

void primo(int n);

int main(){
    
    int numero;

    cout<<"\tNumeros Primos"<<endl;
    cout<<"Ingrese hasta que numero encontrar: ";cin>>numero;
    cout<<"\nLos numeros primos son"<<endl;
    primo(numero);

    return 0;
}

void primo(int n){
    for(int i=2;i<=n;i++){
        int cont=0;
        for(int j=2;j<=i;j++){
            if(i%j==0){
                cont=cont+1;
            }
        }
        if(cont<=1){
            cout<<i<<endl;
        }
    }
    return;
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/