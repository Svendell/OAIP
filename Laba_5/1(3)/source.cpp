#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	float r, w, j = 0.1, m = 16, a;
	for (j = 1; j <= 3; j++)
	{
		do
		{
			cout << "Введите a" << endl;
			cin >> a;
			w = tan(a / 3) + exp(a / m);
			r = 0.3 * sqrt(w + j) + abs(pow(a, 2) - 1);
			cout << "r = " << r << endl;
			cout << "w = " << w << endl;
			j = j + 0,1;
		} while (j <= 0.4);
		{

		}
	}
}
