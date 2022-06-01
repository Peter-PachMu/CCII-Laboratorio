template <class T>

class numeros{
private:
	T x;
	T y;
	T z;
public:
	numeros(T x = 0, T y = 0, T z = 0);

	T getMayor() {
		T mayor = x;
		if ( y > mayor) {
			mayor = y;
		}
		if(z > mayor) {
			mayor = z;
		}

		return mayor;
	};
	T getMenor() {
		T menor = x;
		if (y < menor) {
			menor = y;
		}
		if (z < menor) {
			menor = z;
		}

		return menor;
	}
};
template <class T>
numeros<T>::numeros(T x, T y, T z) {
	this->x = x;
	this->y = y;
	this->z = z;
}