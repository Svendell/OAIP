#include <stdio.h>
#include <cstring>
#include <string>
#include <string.h>
#include <sstream>
#include <iostream>
using namespace std;

//задан 1

float integ(float(*) (float), float, float, float);
float f(float);


int main()
{
	setlocale(LC_CTYPE, "Russian");
	float z, a, b, h;
	cout << "предел: a " << endl;
	cin >> a;
	cout << "предел: b " << endl;
	cin >> b;
	cout << "точность:" << endl;
	cin >> h;
	z = integ(f, (float)a, (float)b, (float)h);
	std::cout << "Integral=" << z;
}
float integ(float(*f) (float), float a, float b, float h)
{
	float x, s = 0.0;
	x = a + h;
	while (x <= b)
	{
		s += h * f(x);
		x = x + h;
	}
	return s / 2;
}

float f(float x)
{
	return (pow(x, 3) + x - 3);
}
