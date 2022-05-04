#include <iostream>

using namespace std;

int main(){

    int primos[25];
    int orden=0;

    for(int i=2;i<=100;i++){
        int cont=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                cont+=1;
            }
        }
        if(cont<1){
            primos[orden]=i;
            orden+=1;
        }
    }

    cout<<"\tNumeros primos hasta el 100 en orden descendente:"<<endl;

    for(int i=24;i>=0;i--){
        cout<<primos[i]<<endl;
    }

    return 0;
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/