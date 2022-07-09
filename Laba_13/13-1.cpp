
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 5; //// n- строки m- столбцы
	int B[n][n];
	int i, j, row = 0, colum = 0;
	cout << "Введите элементы массива" << endl;
	//присваиваем значения в массиве
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> B[i][j];

	// поиск минимального значения в массиве на гл диагонали
	int min = B[0][0];
	for (int i = 0,j = 0; i < n; i++) {
		if (min > B[i][j])
		{
			min = B[i][j];
			colum = i;
			row = j;
		}
		j++;
	};
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "B[" << i << "," << j << "]=" << B[i][j] << " ";
	}
	cout << endl;
	cout << "Минимальный элемент B[" << colum << "," << row << "]=" << min << endl;
	// Вывод столбца с минимальнным значением массива
	for (int i = 0; i < n; i++) {
		j = row ;
		cout << "B[" << i << "," << j << "]=" << B[i][j] << " " << endl;;
	};
}
