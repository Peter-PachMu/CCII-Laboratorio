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
    void push(int dato){ //Ingresar Dato
        Nodo *temp = new Nodo();
        temp->dato=dato;
        temp->sig = inicio;
        inicio= temp;
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
        cout<<" 2. Mostrar Pila"<<endl;
        cout<<" 3. SALIR"<<endl;
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
                    cout << "\nPila: \n";
                    lista.imprimir();
                break; 
            }
            cout<<endl;

        }while(opcion!=3);
}
/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/
