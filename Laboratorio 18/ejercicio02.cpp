#include <iostream>

using namespace std;

template <int N>
struct Fibonacci{ 
    enum {
        value = Fibonacci< N - 1 > ::value + Fibonacci< N - 2 > ::value
    };
};

template <>
struct Fibonacci <0>{
    enum { value = 0 };
};

template <>
struct Fibonacci <1>{
    enum { value = 1 };
};

//Serie Fibonacci: 0,1,1,2,3,5,8,13,...
int main(){
    cout << "Posicion Fibonaccio en  0:"<<endl;
    cout << "\t"<<Fibonacci<0>::value << endl;
    cout << "Posicion Fibonaccio en  1:"<<endl;
    cout << "\t"<<Fibonacci<1>::value << endl;
    cout << "Posicion Fibonaccio en  2:"<<endl;
    cout << "\t"<<Fibonacci<2>::value << endl;
    cout << "Posicion Fibonaccio en  3:"<<endl;
    cout << "\t"<<Fibonacci<3>::value << endl;
    cout << "Posicion Fibonaccio en  4:"<<endl;
    cout << "\t"<<Fibonacci<4>::value << endl;
    cout << "Posicion Fibonaccio en  5:"<<endl;
    cout << "\t"<<Fibonacci<5>::value << endl;
    cout << "Posicion Fibonaccio en  6:"<<endl;
    cout << "\t"<<Fibonacci<6>::value << endl;
    cout << "Posicion Fibonaccio en  7:"<<endl;
    cout << "\t"<<Fibonacci<7>::value << endl;
    cout << "Posicion Fibonaccio en  8:"<<endl;
    cout << "\t"<<Fibonacci<8>::value << endl;
    cout << "Posicion Fibonaccio en  9:"<<endl;
    cout << "\t"<<Fibonacci<9>::value << endl;
    cout << "Posicion Fibonaccio en  10:"<<endl;
    cout << "\t"<<Fibonacci<10>::value << endl;
    return 0;
}

/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */