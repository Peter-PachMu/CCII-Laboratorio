#include <iostream>
#include <memory>

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

    //Uso del Shared_ptr
    shared_ptr<double> d = make_unique<double>(1.0);
    //Creacion del ptr debil
    weak_ptr<double> d2 = d;
    shared_ptr<double> d3 = d2.lock();
    

    shared_ptr<Point> pt = make_unique<Point>(1.0,2.0);
    //Creacion del ptr debil
    weak_ptr<Point> pt2 = pt;
    shared_ptr<Point> pt3 = pt2.lock();

    cout<<"Mismo puntero utilizando Puntero debil"<<endl;

    cout << d << ", " << d3 << "\n";
    cout << pt << ", " << pt3 << "\n";
    
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

}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/