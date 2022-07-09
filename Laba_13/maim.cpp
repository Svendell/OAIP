
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 4; //// n- строки m- столбцы
	int B[n][n];
	int i, j, row = 0, colum = 0;
	cout << "Введите элементы массива" << endl;
	//
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> B[i][j];
	// поиск max значения в массиве на гл диагонали
	int max = B[0][0];
	for (int i = 0, j = 0; i < n; i++) {
		if (max < B[i][j])
		{
			max = B[i][j];
			colum = i;
			row = j;
		}
		j++;
	};
	//
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "B[" << i << "," << j << "]=" << B[i][j] << " ";
	}
	cout << endl;
	cout << "Мax элемент B[" << colum << "," << row << "]=" << max << endl;
	// Вывод столбца с минимальнным значением массива
	for (int j = 0; j < n; j++) {
		i = colum;
		cout << "B[" << i << "," << j << "]=" << B[i][j] << " ";
	};
}
