#include <iostream>
using namespace std;

// pervoje
float funk1(float x) {
	float z;
	z = (exp(x) + 2 * pow(x, 2) - 3);
	return z;
};

float funk2(float x) {
	float z1;
	z1 = (pow(x, 3) + 3);
	return z1;
};

float metoddehotom(float(*funk1) (float), float(*funk2) (float), float a, float b, float e) {
	float ff, x = 0.001;
	;
	do {
		x = (a + b) / 2;
		ff = ((*funk1)(x) * (*funk2)(x));
		if (ff <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	} while (abs(a - b) > (2*e));
	cout << "Корень = " << x;
	return 0;
}
/// KONEC PERVOGO

////
void quest1();
void quest2();
int main(void) {
	setlocale(LC_ALL, "Russian");
	int choose;
	do
	{
		cout << endl;
		cout << "Введите" << endl;
		cout << "1-Первое задание" << endl;
		cout << "2-Второе задание" << endl;
		cout << "3-выход" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1: quest1(); break;
		case 2: quest2(); break;
		case 3: break;
		}
	} while (choose != 3);

};

/// 

void quest1() {
	float a, b, e;
	cout << "Предел a= " << endl;;
	cin >> a;
	cout << "Предел b= " << endl;;
	cin >> b;
	cout << "Точность e= " << endl;
	cin >> e;
	metoddehotom(funk1, funk2, a, b, e);
};

void quest2() {

	setlocale(LC_CTYPE, "RUSSIAN");
	using namespace std;
	int k, p;
	cout << "Введите размер матрицы N x N" << endl;
	cin >> k;
	cout << "Введите кол-во матриц" << endl;
	cin >> p;


	srand(5);
	int min = 999999;
	int*** M;
	M = new int** [p];
	for (int l = 0; l < p; l++) {
		M[l] = new int* [k];
		cout << "\nМатрица" << l << ":\n";
		for (int i = 0; i < k; i++) {
			M[l][i] = new int[k];
			for (int j = 0; j < k; j++) {
				M[l][i][j] = rand() % 1000 - 200;
				cout << M[l][i][j] << " ";
				(M[l][i][j] < min) ? min = M[l][i][j] : i = i;
				if (j == k - 1)
					cout << "\n";
			}
		}
	}

	cout << "Минимально значение" << min << endl;
};
