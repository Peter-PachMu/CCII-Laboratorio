#include <iostream>

using namespace std;

bool buscador(int,int[]);

int main(){

    int array[8]={5,6,7,15,3,1,9,4};
    int num;

    cout<<"Ingresar numero a buscar: ";cin>>num;

    buscador(num,array);

    return 0;
}

bool buscador(int n, int vec[]){
    
    int contador=0;
    
    for(int i=0;i<n;i++){
        if (n==vec[i]){
            contador+=1;
        }
    }
    if(contador>0){
        
        cout<<"Verdadero";
        return true;
    }
    else{
        
        cout<<"Falso";
        return false;
    }
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/