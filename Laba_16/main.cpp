#include <iostream>

int poisk(int** A, int colum, int row, int sum1) {
	using namespace std;
	int count = 0, z;
	/// Поиск отриц элементов
	/// 
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colum; j++)
		{

			if (A[i][j] > 0) {

				count++;
				if (count == (row)) {
					cout << i << " " << endl;
					z = i;
					for (int j = 0; j < row; j++) {
						sum1 = sum1 + A[z][j];
													};
					cout << "summa = " << sum1 << endl;
									};
							};

		};
		count = 0;
								};
		
		return 0;
	}

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int row, colum, sum1=0 ;
	int** A;
	cout << "Введите число строк матрицы ";
	cin >> row;
	cout << "Введите чиcло столбцов ";
	cin >> colum;
	cout << "Matrica " << row << " x " << colum << endl;

	A = new int* [row];
	for (int i = 0; i < colum; i++) {
		A[i] = new int[colum];
	};
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colum; j++)
		{
			cout << "Введите " << i << " элемент " << j << "-го столбца ";
			cin >> A[i][j];
		};
	};
	poisk(A, colum, row, sum1);

}
