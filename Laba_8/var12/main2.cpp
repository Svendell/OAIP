#include <stdio.h>
#include <iostream>

using namespace std;

double s2 = 0.0;


int main() {
	setlocale(LC_CTYPE, "Russian");
	double n = 200.0;
	double a, b;
	double x;
	a = 1.0;
	b = 3.0;
	double h = (b - a) / n;
	x = a;
	do {
		s2 = s2 + h * ((sin(x) + 1) + (sin(x + h) + 1)) / 2;
		x = x + h;
	} while (x < (b - h));
	cout << "Ответ: " << s2;
	return 2;
}