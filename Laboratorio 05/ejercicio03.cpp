#include <iostream>

using namespace std;


struct Nodo{
    int numero;
    Nodo *siguiente;
};

void insertar(Nodo* &, int);

void mostrarLista(Nodo* );

int main(){
    
    Nodo* lista=NULL;

    int numero;

    cout<<"Ingrese un numero: ";cin>>numero;
    insertar(lista,numero);
    cout<<"Ingrese un numero 2: ";cin>>numero;
    insertar(lista,numero);
    cout<<"Ingrese un numero 3: ";cin>>numero;
    insertar(lista,numero);


    mostrarLista(lista);
    


    return 0;
}

void insertar(Nodo* &lista,int n){
    Nodo *nuevo_nodo = new Nodo();  //Creacion del nodo
    nuevo_nodo->numero = n;         //Asigna el valor al nuevo nodo

    Nodo *aux1 = lista;
    Nodo *aux2;

    if(lista == aux1){
        lista = nuevo_nodo;
    }


    while((aux1 != NULL) && (aux1->numero <n)){
        aux2 = aux1;
        aux1 = aux1 ->siguiente;
        aux2->siguiente=nuevo_nodo;
    }

    nuevo_nodo->siguiente =aux1;

    cout<<"\nElemento "<<n<<" insertado\n";
}

void mostrarLista(Nodo *lista){
    Nodo *actual= new Nodo();

    actual = lista;
    while(actual != NULL){
        cout<<actual->numero<<" -> ";
        actual = actual ->siguiente;
    }

}



/*
Alumno: Peter Smith Pacherres Muñoz
CUI:    20213134
*/