#pragma once
#include "Ave.h"
#include <iostream>

using namespace std;

class ganso : public Ave
{
public:
	ganso(string, string, string, string, double);
	~ganso();
	void nadar();
	void graznar();
};