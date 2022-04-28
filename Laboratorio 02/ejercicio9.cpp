#include <iostream>

using namespace std;

int main(){

    int base;
    cout<<"\tTriangulo de *"<<endl;
    cout<<"Ingrese el NUMERO de la BASE del triangulo: ";cin>>base;

    cout<<endl;

    for(int i=0;i<base;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */