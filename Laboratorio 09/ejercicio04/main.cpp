#include <iostream>

using namespace std;

template <class T ,class T4>
T minimo(T arrg[], T4 tam);
template <class T2,class T3>
T2 maximo(T2 arrg[], T3 tam);

int main()
{
    //int ArrayEntero[9] = { 5,7,2,8,6,1,3,4,9 };
    const int tam1=9;
    int ArrayEntero[tam1] = { 5,7,2,8,6,1,3,4,9 };

    //float ArrayFloat[5] = { 10.1, 8.4, 3.6, 4.4, 11.2 };
    const int tam2 = 5;
    float ArrayFloat[tam2] = { 10.1, 8.4, 3.6, 4.4, 11.2 };

	cout << "Primer arreglo" << endl;
	cout <<"El menor es: " << minimo(ArrayEntero,tam1)<<endl;
	cout <<"El mayor es: " << maximo(ArrayEntero,tam1)<<endl;

	cout << "Segundo arreglo" << endl;
	cout <<"El menor es: " << minimo(ArrayFloat,tam2) << endl;
	cout <<"El mayor es: " <<maximo(ArrayFloat,tam2) << endl;


}

template <class T, class T4>
T minimo(T arrg[],T4 tam) {
	T min = arrg[0];
	for (int i = 0; i < tam; i++) {
		if (arrg[i] < min) {
			min = arrg[i];
		}
	}
	return min;
}
template <class T2,class T3>
T2 maximo(T2 arrg[],T3 tam) {
	T2 max = arrg[0];
	for (int i = 0; i < tam; i++) {
		if (arrg[i] > max) {
			max = arrg[i];
		}
	}
	return max;
}

/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */