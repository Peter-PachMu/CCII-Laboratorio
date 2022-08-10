#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

class Elementos {
    public:
        void operator()(vector<int> a, vector<int> b) {
        cout<<"\nLas posiciones en la lista A"<<endl;
        for (vector<int>::iterator it = a.begin() ; it !=a.end(); ++it){
            cout << *it<< " ";
        }
        cout<<endl;
        cout<<"\nLas posiciones en la lista B"<<endl;
        for (vector<int>::iterator it = b.begin() ; it !=b.end(); ++it){
            cout << *it<< " ";
        }
        cout<<endl;
        //Ordenamos con el metodo sort
        sort(a.begin(),a.end()); // --> elementos de A
        sort(b.begin(),b.end()); // --> elementos de B
        cout<<"\nLas posiciones en la lista A ordenadas por Sort"<<endl;
        for (vector<int>::iterator it = a.begin() ; it !=a.end(); ++it){
            cout << *it<< " ";
        }
        cout<<endl;
        cout<<"\nLas posiciones en la lista B ordenadas por Sort"<<endl;
        for (vector<int>::iterator it = b.begin() ; it !=b.end(); ++it){
            cout << *it<< " ";
        }
        cout<<endl;
        // aplicamos la condicion de ob1<ob2
        cout<<"\nObjetos que cumplen Obj1.a < Obj2.b"<<endl;
        for(int i = 0; i<20 ;i ++){
            if(a[i]<b[i]){
                cout<<a[i]<<" < "<<b[i]<<endl;
            }
        }
    }
};


int main(){

    vector<int> a;
    vector<int> b;

    default_random_engine generator;
    uniform_int_distribution<int> datos(0,100);

    //Creacion de los datos de forma RADMON
    for (int i = 0; i< 20;i++){
        a.push_back(datos(generator));
    }
    for (int i = 0; i< 20;i++){
        b.push_back(datos(generator));
    }

    // Uso del functor
    Elementos desigualdad;
    desigualdad(a,b);
   
    return 0;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/