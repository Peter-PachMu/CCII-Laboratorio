#pragma once
#include "ClaseMultimedia.h"
#include <iostream>
#include <string>

using namespace std;

class ClaseDisco : public ClaseMultimedia
{
protected:
	string tipo;
public:
	ClaseDisco(string, string, string, string, int, string);
	~ClaseDisco();
	void info();
};