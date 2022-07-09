#include <iostream>
#include <math.h>
const int Nmax = 100; // максимальный размер массива

int main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	float A[Nmax]; // массив
	int n; // размер массива
	float S;
	int i; // счётчик

	// ввод массива
	cout << "Кол-во лет ";
	// ввод размера массива
	cin >> n;
	cout << "Цена на оборудывание в год ";
	// ввод элементов массива
	for (i = 0; i < n; i++) // при вводе дробного числа в массив 
		cin >> A[i];
	S = 0;
	for (i = 0; i < n; i++)
		S = S + A[i];

	// вывод суммы элементов с потерями
	float b, c, e;
	cout << " Сколько процентов потеряли = " << endl;
	cin >> b;

	c = S / 100;
	e = S - c * b;
	cout << "Сумма = " << e;

	return 0;
}
