#include <iostream>

float funkcijaSINand1(float x) {
	x = sin(x) + 1;
	return x; // придаёт переменной "x" то, что посчитала функция
};
float funkcijaDVA(float x) {
	x = sin(x) + pow(x,3);
	return x;
};
float funkcijaDVA2(float x) {
	x = cos(x);
	return x;

}

float metoda_parabol(float a, float b, float n) {
	using namespace std;
	float s1 = 0, s2 = 0, i = 1, z, x, h;

	n = 200;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	do {
		s2 = s2 + funkcijaSINand1(x);
		s1 = s1 + funkcijaSINand1(x);
		x = x + h;
		i = i + 1;
	} while (i < n);
	z = (h / 3) * (funkcijaSINand1(a) + 4 * (funkcijaSINand1((a + h)) + 4 * s1 + 2 * s2 + funkcijaSINand1(b)) );
	cout <<z<<endl;
	return z;
};

float metoda_Trapecij(float a, float b, float n) {
	using namespace std;
	float h, s=0, x, z;
	x = a;
	h = (b - a) / n;
	do {
		s = s + h * (funkcijaSINand1(x) + funkcijaSINand1((x + h)) / 2);
		x = x + h;
	} while (x < (b - h));
	z = x;
	cout << z<<endl;
	return z;
};

float metoda_dihotomii(float a, float b, float n, float e) {
	using namespace std;
	float x;
	do {
		x = (a + b) / 2;
		if (funkcijaDVA(x) * funkcijaDVA2(a) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	while (abs(a - b) < (2 * e));

		x = sqrt(x);
		cout << x << endl;;
		return x;
	};

float metoda_Kasatelnoj(float a, float b, float n, float e) {
	using namespace std;

	float x, x1;
	if (funkcijaDVA(a) + funkcijaDVA(a) > 0) {
		x1 = a;
	}
	else {
		x1 = b;
	};

	do {
		x = x1;
		x1 = x - (funkcijaDVA(x) / funkcijaDVA2(x));
	} while (abs(x1 - x) > e);

	cout << x1<< endl;
	return x1;
}

float main() {
	using namespace std;
	float a, b, n = 200, e = 0.0001;
	cout << "cin a = ";
	cin >> a;
	cout << "cin b = ";
	cin >> b;
	(*metoda_parabol)(a, b, n);
	(*metoda_Trapecij)(a, b, n);
	(*metoda_Kasatelnoj)(a, b, n, e);
	float (*functOne)(float a, float b, float n, float e);
	functOne = metoda_dihotomii;
	functOne(a, b, n, e);
	};
