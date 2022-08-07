#include <iostream>

using namespace std;

template <int N>

struct Binario{ 
    enum { value = (Binario< N/2 >::value) * 10  + (N%2)}; 
}; 

template <>
struct Binario <0>{
    enum { value = 0000 };
};

template <>
struct Binario <1>{
    enum { value = 0001 };
};


int main(){
    cout << "Numero binario de 50: " << endl; 
    cout << Binario<50>::value << endl;
    cout << "Numero binario de 10: " << endl; 
    cout << Binario<10>::value << endl;
    cout << "Numero binario de 0: " << endl; 
    cout << Binario<0>::value << endl;

    return 0;
}

/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */