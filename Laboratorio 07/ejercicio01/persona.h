#pragma once
#include <iostream>
#include <string>
//CLASE BASE
using namespace std;

class persona
{
protected:	//Atributos
	string nombre = "Peter";
	int edad = 25;
public:	//Metodos
	persona();	//Constructor
	~persona();	//Destructor
};