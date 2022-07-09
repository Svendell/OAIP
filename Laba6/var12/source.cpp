#include <stdio.h>
#include <iostream>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	float b, d, a = 1.33e-3, k = 6, x = 0;
	for (int i = 0; i <=4; i++)
	{
		cout << "¬ведите x: ";
		cin >> x;
		d =(exp(-x) + (x - a))/ (log(x));
		if (d >= k * sqrt(a))
			b = 6 * d * x;
		else
			b = sin(a / x);
		cout << "x = " << x << endl;
		cout << "d = " << d << endl;
		cout << "b = " << b << endl;
		cout << " " << endl;
	}
}
