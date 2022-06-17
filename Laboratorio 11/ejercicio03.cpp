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

    bool buscar(int localizador){
        Nodo *aux2= inicio;
        int pos=1;
        while(aux2!=NULL){
            if(aux2->dato==localizador){
                cout<<"El dato se encuentra en la pila"<<endl;
                cout<<"En la posicion de la pila: "<<pos<<endl;
                return true;
                break;
            }
            else{
                aux2 = aux2->sig;
                pos+=1;
            }
        }
        return false;
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
        cout<<" 3. Buscar elemento en Pila"<<endl;
        cout<<" 4. Mostrar Pila"<<endl;
        cout<<" 5. SALIR"<<endl;
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
                    cout<< "Ingresar dato a Buscar: "; cin>>dato;
                    cout<< "Buscando dato ... "<<endl;
                    if(lista.buscar(dato)==false){
                        cout<<"El dato no se encuentra en la PILA"<<endl;
                    }
                break;

                case 4:
                    cout << "\nPila: \n";
                    lista.imprimir();
                break;  
            }
            cout<<endl;

        }while(opcion!=5);
}

/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/