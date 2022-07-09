#include <iostream>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 15;
	int x[n], y[n], k = 0, i = 0, j = 0;
	for (i; i < n; i++)
	{
		x[i] = rand() % 100;
		cout << " " << x[i];
	}
	cout << endl;
	for (j; j < n; j++)
	{
		y[j] = rand() % 100;
		cout << " " << y[j];
	}
	cout << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (x[i] == y[j]) {
				cout << x[i] << endl;
				k += 1;
			}
		}
	}
	cout << "k = " << k << endl;
}
