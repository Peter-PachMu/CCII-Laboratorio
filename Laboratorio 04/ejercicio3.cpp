#include <iostream>

using namespace std;

int main(){

    int array[5][3];
    int sumatoria=0;

    cout<<"\tMatriz"<<endl;
    for(int i=0;i<5;i++){//fila
        for(int j=0;j<3;j++){//columna
            cout<<"Ingrese el numero de la posicion "<<i+1<<" x "<<j+1<<": ";cin>>array[i][j];
            if((i+1)%2==0){
                sumatoria+=array[i][j];
            }
        }
    }

    cout<<endl;
    //Mostramos el array
    for(int i=0;i<5;i++){//fila
        for(int j=0;j<3;j++){//columna
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nLa sumatoria Total de las filas pares es: "<<sumatoria;

    return 0;
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/