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

class ListaEnl{
    Nodo *inicio;
public:
    ListaEnl (){
        inicio=NULL;
    }
    void final(int dato){
        Nodo *temp = new Nodo();
        temp->dato =dato;
        if(inicio == NULL){
            inicio = temp;
        }
        else{
            Nodo *ptr = inicio;
            while (ptr->sig != NULL){
                ptr = ptr ->sig;
            }
            ptr->sig = temp;
        }
    }
    void datoInicio(int dato){
        Nodo *temp = new Nodo();
        temp->dato=dato;
        temp->sig = inicio;
        inicio= temp;
}

    void imprimir() {
        Nodo *nodoactual = this->inicio;
        if (nodoactual != nullptr) {
            for(nodoactual=inicio;nodoactual != nullptr;nodoactual=nodoactual->sig){
                cout<<nodoactual->dato<<"->";
            }
        } else {
            cout << "La lista está vacía." << endl;
        }
    }
};

void menu(){
        cout<<"Menu de lista enlazada"<<endl;
        cout<<" 1. Ingresar dato(siguiente)"<<endl;
        cout<<" 2. Ingresar dato al Inicio"<<endl;
        cout<<" 3. Mostrar Lista"<<endl;
        cout<<" 4. SALIR"<<endl;
        cout<<"Digite N OPCION: ";
    }

int main(){

    int opcion;

    Nodo* a = new Nodo;

    ListaEnl lista = ListaEnl();
    do
        {
            menu();  
            cin>> opcion;
    
            switch(opcion)
            {
                case 1:
                    int dato;
                    cout<< "Ingresar dato: "; cin>>dato;
                    lista.final(dato);
                break;

                case 2:
                    cout<< "Ingresar dato: "; cin>>dato;
                    lista.datoInicio(dato);
                break;
                
                case 3:
                    cout << "\nLista: \n";
                    lista.imprimir();
                break; 
            }
            cout<<endl;

        }while(opcion!=4);
}
/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/
