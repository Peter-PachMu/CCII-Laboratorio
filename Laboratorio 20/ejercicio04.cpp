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
    shared_ptr<double> d2 = d;

    shared_ptr<Point> pt = make_unique<Point>(1.0,2.0);
    shared_ptr<Point> pt2 = pt;

    cout<<"Mismo puntero"<<endl;

    cout << d << ", " << d2 << "\n";
    cout << pt << ", " << pt2 << "\n";
    
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

    cout<<"Cantidad de veces que el puntero esta en uso"<<endl;
    cout <<"d: "<< d.use_count() << "\n"; 
    cout <<"pt: "<< pt.use_count() << "\n"; 

    d2.reset();
    pt2.reset();

    cout<<"Cantidad de veces que el puntero esta en uso despues de liberar"<<endl;
    cout <<"d: "<< d.use_count() << "\n"; 
    cout <<"pt: "<< pt.use_count() << "\n"; 

}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/