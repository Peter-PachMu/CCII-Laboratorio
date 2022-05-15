#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class fechas
{
private:
	string nombre;
	int Nanio;
	int Nmes;
	int Ndia;
	int Hanio;
	int Hmes;
	int Hdia;

public:
	fechas(string ,int , int, int, int, int, int);

	void edad();
};