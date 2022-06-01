#include <iostream>
#include "numeros.h"

using namespace std;
int main()
{

	numeros <int> num1(2, 9, 6);
	numeros <float> num2(5.2, 10.3, 4.6);
	
	cout << "El numero mayor es : " << num1.getMayor() << endl;
	cout << "El numero menor es : " << num2.getMenor() << endl;
	
	
	return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */
