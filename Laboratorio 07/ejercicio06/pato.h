#pragma once
#include "Ave.h"
#include <iostream>

using namespace std;

class pato : public Ave
{
public:
	pato(string, string, string, string, double);
	~pato();
	void nadar();
	void parpar();
};
