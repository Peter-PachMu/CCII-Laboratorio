#include <iostream>

using namespace std;

template <class Dec>
void Hexadecimal(Dec N);

int main(){
    cout <<"El numero en Hexadecimal de 236332 es: " << endl;
    Hexadecimal(236332);
    
    cout <<"\nEl numero en Hexadecimal de 15 es: " << endl;
    Hexadecimal(15);
    return 0;

}


template <class Dec>
void Hexadecimal(Dec N){
    if(N<16){
        switch (N)
        {
        case 10:
            cout<<"A";
        break;
        case 11:
            cout<<"B";
        break;
        case 12:
            cout<<"C";
        break;
        case 13:
            cout<<"D";
         break;    
        case 14:
            cout<<"E";
        break;
        case 15:
            cout<<"F";
        break;
        default:
            cout<<N;
        break;
        }
    }else{  //Aplicamos la recursividad
        Hexadecimal(N / 16); 
        Hexadecimal(N % 16);
    }
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   
*/
