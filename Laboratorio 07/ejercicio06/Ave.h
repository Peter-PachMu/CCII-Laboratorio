#pragma once
#include <iostream>
#include <string>

using namespace std;

class Ave

{
protected:
	string especie;
	string pico;
	string tipo;
	string patas;
	double peso;
public:
	Ave(string, string, string, string, double);
	~Ave();
	void informacion();
};
