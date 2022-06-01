template <class T1,class T2>

class Operador{

private:
	T1 num1;
	T2 num2;
public:
	Operador(T1 num1, T2 num2);

	T2 suma(){
		return num1 + num2;
	}
	T2 resta() {
		return num1 - num2;
	}
	T2 multiplica() {
		return num1 * num2;
	}
	T2 division() {
		return num1 / num2;
	}
};

template <class T1, class T2>
Operador<T1, T2>::Operador(T1 num1, T2 num2) {
	this->num1 = num1;
	this->num2 = num2;
}