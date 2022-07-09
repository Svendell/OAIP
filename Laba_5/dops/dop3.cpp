#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double n, i;
	int k;
	cout << "¬ведите число k: " << endl;
	cin >> k;
	for (i = 0; i < 1000; i++)
	{
		n = 0;
		n = pow(2, i);
		if (i + 1 == k) break;
	}
	cout << n << " - элемент последовательности под номером " << k << endl;
}
