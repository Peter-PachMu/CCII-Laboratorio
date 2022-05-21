#pragma once
#include "Color.h"
#include "Material.h"
#include <iostream>
#include <string>

using namespace std;

class Objetos :public Color, public Material
{
private:
	string obj;

public:
	Objetos(int,int,int,string,string,string);
	~Objetos();
	void resultado();
};