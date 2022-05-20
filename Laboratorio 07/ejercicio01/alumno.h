#pragma once
#include "persona.h"
#include <string>
#include <iostream>
//CLASE DERIVADA
using namespace std;

class alumno : public persona
{
public:
	alumno();
	~alumno();
	void mostrarInfo();
};

