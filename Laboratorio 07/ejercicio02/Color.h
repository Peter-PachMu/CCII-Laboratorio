#pragma once
#include <iostream>
#include <string>

using namespace std;

class Color
{
protected:
	int red;
	int blue;
	int green;
	//Adicional para colocar el nombre del color
	string rgb; 
public:
	Color(int, int, int, string);
	~Color();
};

