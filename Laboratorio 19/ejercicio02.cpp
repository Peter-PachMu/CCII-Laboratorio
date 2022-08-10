#include <iostream>
#include <vector>

using namespace std;

class Find {
public:
    
    vector<int> operator()(vector<int> x,int buscar){
        vector<int> posicion; // vector donde se guardaran las posiciones
        int cant = x.size();
        int pos = 0;
        for(int i = 0; i<cant;i++){
            if( x[i] == buscar){
                posicion.push_back(pos);
            }
            pos++;
        }
        return posicion;
    }
};


int main(){

    vector<int> Lista = {2,3,4,2,2,8};
    cout<<"\t--- Lista ---"<<endl;
    for (vector<int>::iterator it = Lista.begin() ; it !=Lista.end(); ++it){
        cout << *it<< "  ";
    }
    cout<<"."<<endl;

    //Uso del functor
    Find buscar;
    vector<int> resultado = buscar(Lista,2);
    
    //Mostrar resultado
    cout<<"\nLas posiciones en la lista del numero \na buscar (2) estan en:\n"<<endl;
    for (vector<int>::iterator it = resultado.begin() ; it !=resultado.end(); ++it){
        cout << *it<< "  ";
    }

    return 0;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/