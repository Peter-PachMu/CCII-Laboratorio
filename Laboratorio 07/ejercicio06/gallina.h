#pragma once
#include "Ave.h"
#include <iostream>

using namespace std;

class gallina : public Ave
{
public:
	gallina(string, string, string, string, double);
	~gallina();
	void empollando();
	void cacareo();
};