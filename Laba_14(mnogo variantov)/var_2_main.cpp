#include <iostream>

using namespace std;
void massiv();
void matrix();

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int c;
	do
	{
		cout << endl;
		cout << "¬ведите" << endl;
		cout << "1-одномерный массив" << endl;
		cout << "2-работа с матрицей" << endl;
		cout << "3-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1: massiv(); break;
		case 2: matrix(); break;
		case 3: break;
		}
	} while (c != 3);
}


void massiv()
{
	int size = 0, i, n, min=99999;
	int sum = 0, avar, mn;

	cout << "¬ведите размер массива ";
	cin >> size;

	int *M = new int[size];
	for (i = 0; i < size; i++)
	{
		cout << "¬ведите " << i << " элемент ";
		cin >> *(M + i);
	};

	for (i = 0; i < size; i++)
	{
		if (*(M + i) < min) {
			min = *(M + i);
			n = i;
		};
	};
	cout << "ћиннимальный элемент " << "M[" << n << "]" << " = " << min << endl;
	delete[] M;
};
void matrix()
{
	int* C, row, colum, i, j, max;
	int** A;
	int** B;
		cout << "¬ведите число строк матрицы ";
		cin >> row;
		cout << "¬ведите чиcло столбцов ";
		cin >> colum;
	cout << "Matrica " << row << " x " << colum << endl;

	/// —оздаЄм и заполн¤ем массив
	/// 
	///dop massiv
	B = new int* [row];
	for (int i = 0; i < colum; i++) {
		B[i] = new int[colum];
	}
	//// osnovnoj massiv

	A = new int* [row];
	for (int i = 0; i < colum; i++) {
		A[i] = new int[colum];
	};

	/////////////// zapolniajem massiv
	int max1 = -999, x1, z1, y1;

	for (i = 0; i < row; i++) {
		for (j = 0; j < colum; j++)
		{
			cout << "¬ведите " << i << " элемент " << j << "-го столбца ";
			cin >> A[i][j];

			B[i][j] = A[i][j];
		};
	};
	
	////// »щем макс число
	
	for (int i = 0, k = 0, now, next; i < row; i++) {
		for (int j = 0; j < colum; j++) {
			cout << A[i][j];
			if (A[i][j] > max1) {
				max1 = A[i][j];
				x1 = i;
				z1 = j;
			};
		};
		cout << endl;
	};

	///////////////// ћен¤ем местами строки

	for (int i = 0, k = 0, now, next; i < row; i++) {
		for (int j = 0; j < colum; j++) {
			if (i == 0) {
				A[i][j] = B[x1][j];
				A[x1][j] = B[i][j];
			};
			
		};
	};
	cout << endl;

	// переприсваиваем значени¤ массиву B
	for (i = 0; i < row; i++) {
		for (j = 0; j < colum; j++)
		{
			B[i][j] = A[i][j];
		};
	};

	///// ћен¤ем местами столбцы

	for (int i = 0, k = 0, now, next; i < row; i++) {
		for (int j = 0; j < colum; j++) {
			if (j == 0) {
				A[i][j] = B[i][z1];
				A[i][z1] = B[i][j];
			};

		};
	};

	/// </summary>
	for (int i = 0, k = 0, now, next; i < row; i++) {
		for (int j = 0; j < colum; j++) {
			cout << A[i][j];
		};
		cout << endl;
	};
	////////////////////////////////////
	cout << endl;
	for (int h = 0; h < colum; h++) {
		delete[] A[h];
		delete[] A;
	};

	for (int k = 0; k < colum; k++) {
		delete[] B[k];
		delete[] B;
	};
};
