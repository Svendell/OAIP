#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
void fun1() {
	setlocale(LC_CTYPE, "Russian");
	double n = 200.0;
	double a, b, s1 = 0.0;
	double x;
	a = 1.0;
	b = 3.0;
	double h = (b - a) / n;
	x = a;
	do {
		s1 = s1 + h * ((sin(x) + 1) + (sin(x + h) + 1)) / 2;
		x = x + h;
	} while (x < (b - h));
	cout << "\n Ответ1: " << s1;
}