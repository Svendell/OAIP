#include <iostream>
#include <ctime>

int main()
{
	srand((unsigned)time(NULL));
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	const int N = 100;
	int i, sz, max, min, k = 0, z = 0, l = 0;
	int A[N];
	sz = 11;
	for (i = 0; i < N; i++)
	{
		A[i] = rand() % N;
	}
	
	cout << "Массив ";
	for (i = 0; i < sz; i++) {
		cout << A[i] << " ";
	}
	cout << endl;

	min = A[0];
	k = 0;
	for (i = 0; i < sz; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
			k = i;
		}
	}
	cout << "Минимальное значение массива " << min << endl;
	max = A[0];
	z = 0;
	for (i = 0; i < sz; i++) // max и i
	{
		if (A[i] > max)
		{
			max = A[i];
			z = i;
		}
	}
	cout << "Максимальное значение массива " << max << endl;
	if (k > z) {
		for (i = z; i < k - 1; i++) {
			l = A[i + 1];
			A[i + 1] = A[k - 1];
			A[k - 1] = l;
			k--;

		}
	}
	if (k < z) {
		for (i = k; i < z - 1; i++) {
			l = A[i + 1];
			A[i + 1] = A[z - 1];
			A[z - 1] = l;
			z--;
		}
	}
	cout << "Массив ";
	for (i = 0; i < sz; i++) {
		cout << A[i] << " ";
	}
}
