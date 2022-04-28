#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> vec(100);

    int cant,aux;
    float sumatoria=0;

    cout<<"\tRango de Numeros y la media"<<endl;
    cout<<"Cantidad de numeros a ingresar: ";cin>>cant;

    for(int i=0;i<cant;i++){
        cout<<"Ingresar numero: "<<endl;cin>>vec[i];
        sumatoria=sumatoria+vec[i];
    }


    //Ordenamiento
    for(int i=0;i<cant;i++){
        for(int j=i+1;j<cant;j++){
            if(vec[i]<vec[j]){
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    } 

    
    cout<<"\nEl numero mayor es: "<<vec[0]<<endl;
    cout<<"El numero menor es: "<<vec[cant-1]<<endl;
    cout<<"La media de los numeros ingresado es: "<<sumatoria/cant;

    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */