#include <iostream>
#include <windows.h>

using namespace std;

void first();

void sec();

void posl();

int main(void)

{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_CTYPE, "Russian");

	int c;

	do

	{

		cout << endl;
		SetConsoleTextAttribute(hConsole, 14);
		cout << endl;
		cout << "Choose" << endl;
		cout << "1-quest 1 1" << endl;
		cout << "2-quest 1 2" << endl;
		cout << "3-quest 2" << endl;
		cout << "4-выход" << endl;

		cin >> c;
		SetConsoleTextAttribute(hConsole, 13);
		switch (c)

		{

		case 1: first(); break;

		case 2: sec(); break;

		case 3: posl(); break;

		case 4: break;

		}
		SetConsoleTextAttribute(hConsole, 15);
	} while (c != 4);

}

float f(int a, int b)

{

	float x;

	return x = (a + b) / 2;

}

void metodiox(float(*f) (int, int), float a, float b, float h) {

	do {

		if (((pow(f(a, b), 3) + f(a, b) - 3) * (pow(a, 3) + a - 3)) <= 0)

			b = f(a, b);

		else a = f(a, b);

	} while (abs(a - b) > 2 * 2.7182);

	cout << f(a, b);

}

void metodio(float(*f) (int, int), float a, float b, float h) {

	do {

		if (((pow(sin(f(a, b)), 3)) * (pow(sin(a), 3))) <= 0)

			b = f(a, b);

		else a = f(a, b);

	} while (abs(a - b) > 2 * 2.7182);

	cout << f(a, b);

}

void first() {

	setlocale(LC_CTYPE, "Russian");

	float z, a, b, h, x;

	cout << "предел: a " << endl;

	cin >> a;

	cout << "предел: b " << endl;

	cin >> b;

	h = 0.0001;
	printf("\n\tМетод дихотомии: ");

	metodiox(f, a, b, h);

}

void sec() {

	setlocale(LC_CTYPE, "Russian");

	float z, a, b, h, x;

	cout << "предел: a " << endl;

	cin >> a;

	cout << "предел: b " << endl;

	cin >> b;

	h = 0.0001;

	printf("\n\tМетод дихотомии: ");

	metodio(f, a, b, h);

}

int sum(int n, ...)

{

	int k = 2, t = 0, v = 0;

	int* p = &n;

	int sum = 0;

	for (int i = n; i > 0; i--) {

		if (k % 2 == 0) {

			t = *(++p);

			v = *(++p);

			sum += t * v;

		}

		k++;

	}

	return sum;

}

void posl()

{

	setlocale(LC_CTYPE, "Russian");

	cout << "Последовательность: 4, 5, 1, 2, 3, 7 \n";

	cout << "Сумма: " << sum(6, 4, 5, 1, 2, 3, 7) << endl;

	cout << "Последовательность: 1, 3, 4, 2, 10, 18, 2, 4 \n";

	cout << "Сумма: " << sum(8, 1, 3, 4, 2, 10, 18, 2, 4) << endl;

	cout << "Последовательность: 5, 1, 2, 3\n";

	cout << "Сумма: " << sum(4, 5, 1, 2, 3) << endl;

}
