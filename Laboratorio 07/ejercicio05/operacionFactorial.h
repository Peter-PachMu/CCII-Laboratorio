#pragma once
#include "operacionBase.h"

class operacionFactorial : public operacionBase
{
public:
	operacionFactorial(int);
	~operacionFactorial();
	int devolverFactorial();
};
