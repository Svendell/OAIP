#include <iostream>

void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	float r, w, j = 1.8, m = 16, a = -1.4;
	while (j < 3)
	{
		cout << "Введите j" << endl;
		cin >> j;
		w = tan(a / 3) + exp(a / m);
		r = 0.3 * sqrt(w + j) + abs(pow(a, 2) - 1);
		cout << "r = " << r << endl;
		cout << "w = " << w << endl;
		cout << endl;
		j = j + 0, 2;
	}
}
