#include <iostream>

using namespace std;

int main(){
    
    int lista[10];

    float sumatoria=0;

    for(int i=0;i<10;i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>lista[i];
        if(lista[i]<0){
            sumatoria=sumatoria-lista[i];
        }   
    }

    cout<<"La sumatoria total de numeros negativos es de : -"<<sumatoria;

    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */