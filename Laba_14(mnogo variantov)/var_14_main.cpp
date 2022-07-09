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
	int C, N1 = 0;
	cout << "Введите число C=";
	cin >> C;
	for (i = 0; i < size; i++)
	{
		cout << "Введите " << i << " элемент ";
		cin >> *(M + i);


		if (C < *(M + i) ) {
			N1++ ;
		};
	};

	cout << "В массиве " << N1 << " элемент(а/ов), которые больше C=" << C << endl;

	/// Max element

	int max=0, q, q1, q2, q3,q4=1;

	for (i = 0; i < size; i++)
	{
		q3 = abs(*(M + i));
		if ( q3 > max) {
			q = i+1;

			max = abs(*(M + i));

		};

	};
			cout << "Max элемент " << "M[" << i << "]" << " = " << max << endl;

		////// Proizvedenie posle Max 4isla

	for (int i=q ; i < size; i++)
						{
		q1 = *(M + i);
		q2 = q1 * q3;
		q3 = q2;
						};
	cout << "proizvedenie = " << q2 << endl;
	delete[] M;
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

	A = new int* [row];
	for (int i = 0; i < colum; i++) {
		A[i] = new int[colum];
	};
	for (i = 0; i < row; i++) {
		for (j = 0; j < colum; j++)
		{
			cout << "Введите " << i << " элемент " << j << "-го столбца ";
			cin >> A[i][j];
		};
	};

	//	max = A[0];
	//	max_row = 0;
	//	max_colum = 0;
	int n2;

	for (int i = 0, k = 0, now, next; i < row; i++) {
		for (int j = 0; j < colum; j++) {
			cout << A[i][j];
			if (A[i][j] == 0)
			{
				n2 = i;

			};

		};
		cout << endl;
	};
	for (int i = 0, k = 0, now, next; i < row; i++) {
		for (int j = 0; j < colum; j++)
		{

			cout << (A[i][j] - A[n2][0]) <<" ";
		};
		cout << endl;
	};

	///////////////// СРАВНИВАЕМ СТОЛБЕЦ СО СТРОКОЙ 


	/////    for (int i = 0, k = 0, l = 0, p = 0, now, next; i < row; i) {
	/////    	for (int j = 0; j < colum; j) {
	/////    
	/////    		if (A[i][j] == A[k][l])
	/////    		{
	/////    			j++;
	/////    			k = j;
	/////    			p++;
	/////    			if (p == colum) {
	/////    				now = j;
	/////    				next = l;
	/////    				cout << "now =" << p << " НАШЁЛ!!!!!" << "Это столбец - " << l << "Строка -" << k; //////////чут чуть добавил
	/////    				break;
	/////    			};
	/////    		}
	/////    		else {
	/////    			l++;
	/////    			j = 0;
	/////    		};
	/////    
	/////    	};
	/////    	cout << endl;
	/////    };

	cout << endl;
	for (int k = 0; k < colum; k++)
		delete[] A[k];
	delete[] A;

};


