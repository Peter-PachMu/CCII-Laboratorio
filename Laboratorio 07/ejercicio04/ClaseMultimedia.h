#pragma once
#include <iostream>
#include <string>

using namespace std;

class ClaseMultimedia
{
protected:
	string titulo, autor, formato, calidad;
	int	minutos;
	
public:
	ClaseMultimedia(string, string, string, string, int);
	~ClaseMultimedia();
	void datos();
};
