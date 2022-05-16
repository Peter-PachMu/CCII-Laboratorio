#include "matriz.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    matriz mat1 = matriz(3, 3, 6);

    mat1.crear();
    mat1.mostrar();
    mat1.buscar();
  
    return 0;
}
