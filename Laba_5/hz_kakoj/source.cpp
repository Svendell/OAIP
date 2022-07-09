#include <iostream>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	float r, w, m = 16, j;
	float a = -1.4;
	for (int n = 1; n <= 4; n++)
	{
		cout << "Введите j" << endl;
		cin >> j;
		w = tan(a / 3) + exp(a / m);
		r = 0.3 * sqrt(w + j) + abs(pow(a, 2) - 1);
		cout << "r = " << r << endl;
		cout << "w = " << w << endl;
		cout << endl;
	}
}
