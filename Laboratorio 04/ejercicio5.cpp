#include <iostream>
#include <string>

using namespace std;

int main(){

   
    string producto[2],busqueda;
    int stock[2], precio[2];
    

    cout<<"\tTienda de Abarrotes"<<endl;

    cout<<"Alta de productos"<<endl;

    for(int i=0;i<2;i++){
        cout<<"\tProducto"<<i+1<<endl;
        cout<<"Nombre: ";cin>>producto[i];
        cout<<"Precio: ";cin>>precio[i];
        cout<<"Stock: ";cin>>stock[i];
    }

    cout<<"\n\t---Busqueda del producto---"<<endl;
    cout<<"Producto a Buscar: ";cin>>busqueda;

    for(int i=0;i<2;i++){
        if(busqueda==producto[i]){
            cout<<"Producto dentro del Almacen"<<endl;
            cout<<"Precio: "<<precio[i]<<endl;
            cout<<"Stock: "<<stock[i]<<endl;
        }
        else{
            cout<<"Producto No Disponible en Almacen"<<endl;
        }
    }

    cout<<"\n\t---Modificar Stock---"<<endl;
    cout<<"Producto a modificar: ";cin>>busqueda;
    for(int i=0;i<2;i++){
        if(busqueda==producto[i]){
            cout<<"Nuevo Stock:";cin>>stock[i];
            cout<<"Stock: "<<stock[i]<<endl;
        }

    }

    return 0;
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/