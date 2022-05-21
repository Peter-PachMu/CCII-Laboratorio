#pragma once

class operacionBase
{
protected:
	int operador;
public:
	operacionBase(int);
	~operacionBase();
	void setOperador(int);
	int getOperador();
};
