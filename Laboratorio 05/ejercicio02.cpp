#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main(){

    double *vector1, *vector2;
    vector1 = new double[5];
    vector2 = new double[5];

    auto semilla = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generador(semilla);
    uniform_real_distribution<double> rango(1,100);

    cout<<"\t**** INFO ****"<<endl;
    cout<<"-Tamanio de ambos vectores es de 5."<<endl;
    cout<<"-Cada resultado es el Resultado del Producto Punto de un Par de Vectores."<<endl;
    cout<<"\t**************\n"<<endl;

    for(int i=999980;i<1000000;i++){
   
        for (int i=0; i<5; i++){
            vector1[i]=rango(generador);
            //cout<<"i= "<<i<<" : "<<vector1[i]<<endl; //Verifica los datos
        }
        for (int j=0; j<5; j++){
            vector2[j]=rango(generador);
            //cout<<"j= "<<j<<" : "<<vector2[j]<<endl; //Verificar los datos
        }
        //Punto Producto
        double ptoProducto=0;
        
        for(int i=0;i<5;i++){
            ptoProducto+=(vector1[i]*vector2[i]);
            //cout<<"\nProducto "<<i<<": "<<ptoProducto<<endl; //Analizar el producto
        }
        cout<<"Resultado del "<<i+1<<" Producto Punto es: "<<ptoProducto<<endl;
        delete[]vector1;
        delete[]vector2;      
    }

    return 0;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/