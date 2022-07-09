#include <iostream>

using namespace std;

int z2(int n, int k, int** M, ...);

int main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	srand(2);
	cout << "\nЗадание 2\n";
	int k;
	cout << "Пусть n = 3, 4, 5\n";
	cout << "Введите размерность - "; //cin >> n;
	cin >> k;
	int*** M;
	M = new int** [5];
	for (int l = 0; l < 5; l++) {
		M[l] = new int* [k];
		cout << "\nМатрица" << l << ":\n";
		for (int i = 0; i < k; i++) {
			M[l][i] = new int[k];
			for (int j = 0; j < k; j++) {
				M[l][i][j] = rand() % 1000 - 200;
				cout << M[l][i][j] << " ";
				if (j == k - 1)
					cout << "\n";
			}
		}
	}
	cout << "\nМинимальное значение среди 3 матриц - " << z2(3, k, M[0], M[1], M[2]);
	cout << "\nМинимальное значение среди 4 матриц - " << z2(4, k, M[0], M[1], M[2], M[3]);
	cout << "\nМинимальное значение среди 5 матриц - " << z2(5, k, M[0], M[1], M[2], M[3], M[4]);
}

int z2(int n, int k, int** M, ...) {
	int*** p = &M;
	int s = 0;
	int min = 99999;
	for (int l = 0; l < n - s; l++) {
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				(p[l][i][j] < min) ? min = p[l][i][j] : i = i;
			}
		}
		++p;
		s++;
	}
	return min;
}
