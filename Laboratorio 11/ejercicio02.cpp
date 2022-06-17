#include <iostream>

using namespace std;

class Nodo{
public:
    int dato;  
    Nodo *sig;
    Nodo(){
        sig=NULL;
    }
};

class Pilas{
    Nodo *inicio;
public:
    Pilas (){
        inicio=NULL;
    }

    void push(int dato){ //Ingresar dato 
        Nodo *nuevo = new Nodo();
        nuevo->dato=dato;
        nuevo->sig = inicio;
        inicio= nuevo;
    }

    void pop(int &dato){  //Eliminar dato 
        Nodo *aux= inicio;
        dato = aux->dato;
        inicio = aux->sig;
        cout<<"Se retiro el dato "<<dato<<"."<<endl;
        delete aux;
    }

    void imprimir() {
        Nodo *nodoactual = this->inicio;
        if (nodoactual != nullptr) {
            for(nodoactual=inicio;nodoactual != nullptr;nodoactual=nodoactual->sig){
                cout<<nodoactual->dato<<endl;
            }
        } else {
            cout << "La Pila está vacía." << endl;
        }
    }
};

void menu(){
        cout<<"Menu de PILA"<<endl;
        cout<<" 1. Ingresar dato"<<endl;
        cout<<" 2. Eliminar elemento de la pila"<<endl;
        cout<<" 3. Mostrar Pila"<<endl;
        cout<<" 4. SALIR"<<endl;
        cout<<"Digite N OPCION: ";
    }

int main(){

    int opcion;

    Nodo* a = new Nodo;

    Pilas lista = Pilas ();
    do
        {
            menu();  
            cin>> opcion;
    
            switch(opcion)
            {
                case 1:
                    int dato;
                    cout<< "Ingresar dato: "; cin>>dato;
                    lista.push(dato);
                break;
    
                case 2:
                    lista.pop(dato);
                break;
                
                case 3:
                    cout << "\nPila: \n";
                    lista.imprimir();
                break;  
            }
            cout<<endl;

        }while(opcion!=4);
}
/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/