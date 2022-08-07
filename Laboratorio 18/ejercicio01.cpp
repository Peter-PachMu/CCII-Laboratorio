#include <iostream>

using namespace std;

// Suma consecutiva de numeros.
template <int N>
struct Suma{ 
    enum { value = N + Suma <N - 1 >::value };
};

template <>
struct Suma <0>{
    enum { value = 0 };
};


// Suma de los digitos de un numero.
template<int Num>     
struct SumDigi{
    enum{ value = (Num%10) + (SumDigi<Num/10>::value)};
};

template<>
struct SumDigi<0>{
    enum{value = 0};
};


int main(){

    int x = Suma<15>::value;
    cout<<"Resultado de la suma CONSECUTIVA de 15 hasta el 0: "<<endl;
    cout <<"\t"<< x << endl;

    int y = SumDigi<25>::value;
    cout<<"Resultado de la suma de los DIGITOS de 25: "<<endl;
    cout <<"\t"<< y << endl;

    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */