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
		cout << "Введите" << endl;
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
	int size = 0, i, n, min;
	float* M, sum = 0, avar, mn;
	cout << "Введите размер массива ";
	cin >> size;

	M = new float[size];
	for (i = 0; i < size; i++)
	{
		cout << "Введите " << i + 1 << " элемент ";
		cin >> *(M + i);
	};
	for (i = 0; i < size; i++)
	{
		if (*(M + i) == 0) {
			min = *(M + i);
			cout << "Миннимальный элемент "<< "M[" << i+1 <<"]" <<" = "<< min << endl;
			delete[] M;
			break;
		};
	};
};
void matrix()
{
	int* C, row, colum, i, j, max_colum, max_row, max;
	int** A;
	//	cout << "Введите число строк матрицы ";
	//	cin >> row;
	//	cout << "Введите чиcло столбцов ";
	//	cin >> colum;
	row = colum = 4;
	cout << "Matrica " << row << " x " << colum << endl;

	A = new int*[row];
	for (int i = 0; i < colum; i++) {
		A[i] = new int[colum];
	};
	for (i = 0; i < row; i++) {
		for (j = 0; j < colum; j++)
		{
			cout << "Введите " << i<< " элемент " << j << "-го столбца ";
			cin >> A[i][j];
		};
	};
//	max = A[0];
//	max_row = 0;
//	max_colum = 0;
	for (int i = 0, k = 0, now, next; i < row; i++) {
		for (int j = 0; j < colum; j++) {
			cout << A[i][j];

		};
		cout << endl;
	};

	///////////////// СРАВНИВАЕМ СТОЛБЕЦ СО СТРОКОЙ 


	for (int i = 0, k = 0, l = 0, p = 0, now, next; i < row; i) {
		for (int j = 0; j < colum;j) 

		{

			if ( (A[i][j]) == (A[k][l]) )
			{
				j++;
				k = j;
				p++;
				if (p == colum) {
					now = j;
					next = l;
					cout << "now =" << p<< " НАШЁЛ!!!!!" <<"Это столбец = "<< l << "Строка = "<< i ; //////////чут чуть добавил
					break;
				};
			}
			else {
				l++;
				j = 0;
				};
		};
		k++;
		cout << endl;
	};
		cout << endl;
		for (int k = 0; k < colum; k++)
			delete[] A[k];
		delete[] A;

	};


