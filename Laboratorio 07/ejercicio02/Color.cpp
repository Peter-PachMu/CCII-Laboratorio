#include "Color.h"
#include <iostream>
#include <string>

using namespace std;

Color::Color(int _red, int _blue, int _green, string _rgb)
{
	red = _red;
	blue = _blue;
	green = _green;
	rgb = _rgb;
}
Color::~Color()
{
}