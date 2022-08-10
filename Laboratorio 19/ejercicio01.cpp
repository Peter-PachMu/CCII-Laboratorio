#include <iostream>
#include <vector>

using namespace std;

class Promedio{
public:
    double operator()(vector<double> x){
        int cantDatos = x.size();
        double total = 0;
        for(int i=0;i<cantDatos;i++){
            total = total + x[i];
        }
        double resl= total/cantDatos;
        return resl;
    }
};

class multipliXY{
public:
    double operator()(vector<double> x,vector<double> y){
        int cantDatos = x.size();
        double total = 0;
        for(int i=0;i<cantDatos;i++){
            total = total + (x[i] * y[i]);
        }
        return total;
    }
};

class columSumAlCuadrado{
public:
    double operator()(vector<double> x){
        int cantDatos = x.size();
        double total = 0;
        for(int i=0;i<cantDatos;i++){
            total = total + (x[i] * x[i]);
        }
        return total;
    }
};

class encB{
public:
    double operator()(vector<double> x, vector<double> y){
        int cantDatos = x.size();

        Promedio p;
        double promX =  p(x); // Promedio de X
        double promY =  p(y); // Promedio de Y

        multipliXY mul;
        double xpory = mul(x,y);    //  Sumatoria de la multiplicacion de X por Y

        columSumAlCuadrado x2;
        double cx2 = x2(x);   // Sumatoria de la columan x al cuadrado

        double b = (xpory-(cantDatos*promX*promY))/(cx2-(cantDatos*promX*promX)); //Ecuacion para calcular b.

        return b;
    }
};

class encA{
public:
    double operator()(vector<double> x, vector<double> y){
        int cantDatos = x.size();

        Promedio p;
        double promX =  p(x); // Promedio de X
        double promY =  p(y); // Promedio de Y

        encB hallarB;
        double b = hallarB(x,y);

        double a = promY - (b * promX ); //ecuacion para calcular a.

        return a;
    }
};

int main(){

    vector<double> colX = {1,3,4,2,1,7};
    vector<double> colY = {2,3,2.5,2,2,3.5};
    cout<<"---Ecuacion de Regreso lineal Simple---"<<endl;
    cout<<"Dados los datos de X e Y:"<<endl;
    cout<<"X: ";  
    for (vector<double>::iterator it = colX.begin() ; it !=colX.end(); ++it){
        cout << *it<< "  ";
    }
    cout<<"\nY: ";
    for (vector<double>::iterator it = colY.begin() ; it !=colY.end(); ++it){
        cout << *it<< "  ";
    }

    //Hallamos B
    encB hallarB;
    double b = hallarB(colX,colY);

     //Hallamos A
    encA hallarA;
    double a = hallarA(colX,colY);

    cout<<"\nSe obtiene como resultado:"<<endl;
    cout<<"El par (a,b): ( "<<a<<" , "<<b<<" )";

    return 0;
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/