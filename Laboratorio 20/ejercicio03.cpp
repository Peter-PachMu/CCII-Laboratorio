#include <iostream>
#include <memory>

using namespace std;

class C1
{
private:
    std::shared_ptr<double> d;
public:
    C1(std::shared_ptr<double> value) : d(value) {}
    virtual ~C1() { cout << "\nC1 destructor\n"; }
    void print() const { cout << "Valor " << *d<<"\n"; }
};

class C2
{
private:
    shared_ptr<double> d;
public:
    C2(shared_ptr<double> value) : d(value) {}
    virtual ~C2() { cout << "\nC2 destructor\n"; }
    void print() const { cout << "Valor " << *d<<"\n"; }
};

int main(){
	
	shared_ptr<double> d =make_shared<double>(3.5);
	shared_ptr<C1> A = make_shared<C1>(d);
	shared_ptr<C2> B = make_shared<C2>(d);

	A->print();
	B->print();
	
}
/*
Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/