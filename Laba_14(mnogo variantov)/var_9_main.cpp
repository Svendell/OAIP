#include <ctime>
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
		cout << "Введите число:\n1 - работа с массивом;\n2 - работа с матрицей;\n3 - выход из программы.\n";
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
	// 1. Задан массив A из n элементов. Найти количество элементов этого массива, больших среднего арифметического всех его элементов.
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int size, i = 0;
	int* A, counter = 0, sum = 0;
	double arifm = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	A = new int[size];
	for (i = 0; i < size; i++)
	{
		A[i] = rand() % 99;
		cout << A[i] << endl;
		sum += A[i];
	}
	arifm = static_cast<double>(sum) / size; //функция для вещественного деления
	for (i = 0; i < size; i++)
		if (A[i] > arifm)
			counter++;
	cout << "Количество элементов, больших среднего арифметического, равного " << arifm « ": " « counter « endl;
	delete[] A;
}

void matrix()
{
	//2. Дана целочисленная прямоугольная матрица. Определить количество строк, не содержащих ни одного нулевого элемента
	// и максимальное из чисел, встречающихся в заданной матрице более одного раза.
	int A[4][3] = { {3,6,0},{4,9,1},{0,5,8},{2,4,6} };
	int counter = 0, numStr = 0, number = 0, numC = -1, maxNum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << A[i][j] << '\t';
		}
		cout << '\n';
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (A[i][j] != 0)
				++counter;
		}
		if (counter == 3)
			++numStr;
		counter = 0;
	}
	cout << "В матрице " « numStr « " ненулевых строк.\n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			number = A[i][j];
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (number == A[i][j])
						maxNum = A[i][j];
				}
			}

		}
	}
	cout << "Максимальный элемент: " << maxNum << endl;
	delete[] A;
}
