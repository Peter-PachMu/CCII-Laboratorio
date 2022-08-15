#include <iostream>
using namespace std;

class Point
{
public:
    Point(double x, double y) : x(x), y(y) {};

    void X(double x){
        this->x = x;
    }

    void Y(double y){
        this->y = y;
    }
    
    void print(){
        cout << "(" << x << ", " << y << ")\n";
    }


private:
    double x{}, y{};

};
//Se agrego la clase Point para la resolucion del ejercicio

int main() {
    double* d = new double(1.0);
    Point* pt = new Point(1.0, 2.0);
    
    cout <<"Antes:"<<endl;
    cout <<*d<<endl;
    pt->print();

    *d = 2.0;
    (*pt).X(3.0);
    (*pt).Y(3.0);
    pt->X(3.0);
    pt->Y(3.0);

    cout <<"\nDespues:"<<endl;
    cout <<*d<<endl;
    pt->print();

    delete d;
    delete pt;
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/