#pragma once
#include <iostream>
#include <string>

using namespace std;

class Material
{
protected:
	string elemento;
public:
	Material(string);
	~Material();
};