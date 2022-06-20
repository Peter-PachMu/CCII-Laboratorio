#include <iostream>
using namespace std;

class Cola
{
protected:
    class NodoCola{
    public:
        NodoCola* siguiente;
        int elemento;
        NodoCola (int x){
            elemento = x;
            siguiente = NULL;
        }
    };
    NodoCola* frente;
    NodoCola* final;
public:
    Cola()
    {
        frente = final = NULL;
    }
    void ingresar(int elemento){
        NodoCola* nuevo;
        nuevo = new NodoCola (elemento);
        if(Vacio()){
            frente=nuevo;
        }else{
            final ->siguiente =nuevo;
        }
        final=nuevo;
    }

    int eliminar(){
        if(Vacio()){
            cout<<"La cola esta vacia"<<endl;
        }
        int aux = frente->elemento;
        NodoCola *a = frente;
        frente = frente ->siguiente;
        delete a;
        return aux;
    }

    int Vacio(){
        return frente == NULL;
    }
    
    bool buscar(int localizador){
        NodoCola *aux2= frente;
        int pos=1;
        while(aux2!=NULL){
            if(aux2->elemento==localizador){
                cout<<"El dato se encuentra en la Cola"<<endl;
                cout<<"En la posicion de la Cola: "<<pos<<endl;
                return true;
                break;
            }
            else{
                aux2 = aux2->siguiente;
                pos+=1;
            }
        }
        return false;
    }

    void imprimir(){
        NodoCola *nodoactual = this->frente;
        if (nodoactual != nullptr) {
            for(nodoactual=frente;nodoactual != nullptr;nodoactual=nodoactual->siguiente){
                cout<<nodoactual->elemento<<endl;
            }
        } else {
            cout << "La Cola está vacía." << endl;
        }
    }
};

void menu(){
    cout<<"Menu de Cola"<<endl;
    cout<<" 1. Ingresar a la Cola"<<endl;
    cout<<" 2. Eliminar dato de la Cola"<<endl;
    cout<<" 3. Buscar elemento en Cola"<<endl;
    cout<<" 4. Mostrar Cola"<<endl;
    cout<<" 5. SALIR"<<endl;
    cout<<"Digite N OPCION: ";
}

int main(){

    int opcion;

    Cola lista = Cola();
    do
    {   
        menu();  
        cin>> opcion;
    
        switch(opcion)
        {
            case 1:
                int dato;
                cout<< "Ingresar dato: "; cin>>dato;
                lista.ingresar(dato);
                break;
    
            case 2:
                cout << "\nEliminando de la Cola... \n";
                cout <<lista.eliminar()<<"-> Salio de la Cola"<<endl;           
            break; 

            case 3:
                cout<< "Ingresar dato a Buscar: "; cin>>dato;
                cout<< "Buscando dato ... "<<endl;
                if(lista.buscar(dato)==false){
                    cout<<"El dato no se encuentra en la COLA"<<endl;
                }
             break;

            case 4:
                cout << "\nCola: \n";
                lista.imprimir();           
            break; 
        }
        cout<<endl;

    }while(opcion!=5); 
} 
/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/