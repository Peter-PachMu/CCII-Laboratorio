#include <iostream>

using namespace std;

template <int N,int P>
struct Potencia{ 
    enum {
        value = N * Potencia< N, P - 1 > ::value
    };
};

template <int N>
struct Potencia <N,0>{
    enum { value = 1 };
};

int main(){
    cout <<"5 elevado a la potencia de 5: "<<endl;
    cout << "\t"<<Potencia<5,5>::value << endl;
    cout <<"\n5 elevado a la potencia de 2: "<<endl;
    cout << "\t"<<Potencia<5,2>::value << endl;
    cout <<"\n5 elevado a la potencia de 0: "<<endl;
    cout << "\t"<<Potencia<5,0>::value << endl;
    
    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */