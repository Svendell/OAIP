#include <locale>
#include <iostream>
void main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	int n, i, a[1000], sum[1000], kmax = 0;
	cout << "¬ведите размер массива (не более 1000)" << endl;
	cin >> n;
	if (n > 1000) return;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 5;
		if (i > 0)
		{
			sum[i] = sum[i - 1] + a[i];
		}
		else
		{
			sum[i] = a[i];
		}
		cout << "a" << i << "=" << a[i] << endl;
	}

	for (i=0; i<n; i++)
		cout << "sum" << i << "=" << sum[i] << endl;
}
