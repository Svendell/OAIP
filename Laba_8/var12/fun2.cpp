#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
void fun2() {
	double n = 200.0;
	double a, b;
	double x;
	double s1 = 0.0;
	double s2 = 0.0;
	int i = 1;
	a = 1.0;
	b = 3.0;
	double h = (b - a) / (2 * n);
	x = a + 2 * h;
	do {
		s2 = s2 + (sin(x) + 1);
		x = x + h;
		s1 = s1 + (sin(x) + 1);
		x = x + h;
		i++;
	} while (i < n);
	s2 = (h / 3) * ((sin(a) + 1) + 4 * (sin(a + h) + 1) + 4 * s1 + 2 * s2 + (sin(b) + 1));
	cout << "\n отв2: " << s2;
}