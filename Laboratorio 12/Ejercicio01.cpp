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

    int Vacio(){
        return frente == NULL;
    }

    void imprimir(){
        NodoCola *nodoactual = this->frente;
        if (nodoactual != nullptr) {
            for(nodoactual=frente;nodoactual != nullptr;nodoactual=nodoactual->siguiente){
                cout<<nodoactual->elemento<<endl;
            }
        } else {
            cout << "La Cola esta vacia." << endl;
        }
    }
};

void menu(){
    cout<<"Menu de Cola"<<endl;
    cout<<" 1. Ingresar a la Cola"<<endl;
    cout<<" 2. Mostrar Cola"<<endl;
    cout<<" 3. SALIR"<<endl;
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
                cout << "\nCola: \n";
                lista.imprimir();           
            break; 
        }
        cout<<endl;

    }while(opcion!=3); 
} 
/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/
