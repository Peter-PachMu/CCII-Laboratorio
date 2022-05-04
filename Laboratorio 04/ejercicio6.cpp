#include <iostream>

using namespace std;

int main(){

    int array[3][3];
    int sumatoriaMayor=0, filamayor=0;

    for(int i=0;i<3;i++){//fila
        int sumatoria=0;
        for(int j=0;j<3;j++){//columna
            cout<<"Ingrese el numero de la posicion "<<i+1<<" x "<<j+1<<": ";cin>>array[i][j];
            sumatoria+=array[i][j];
        }
        if(sumatoria>sumatoriaMayor){
            sumatoriaMayor=sumatoria;
            filamayor=i+1;
        }

    }
    cout<<endl;
    //Mostramos el array
    for(int i=0;i<3;i++){//fila
        for(int j=0;j<3;j++){//columna
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nLa FILA con mayor suma es: "<<filamayor;
    cout<<"\nSu sumatoria de la fila es de: "<<sumatoriaMayor;

    return 0;
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/