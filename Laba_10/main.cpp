#include <iostream> 
using namespace std;

int dvoichnyjcode()
{
	setlocale(LC_CTYPE, "Russian");
	unsigned int value; int i;
	const unsigned int mask = 1 << 31;
	cout << "Введите целое число ";
	cin >> value;
	cout << "Двоичный вид: ";
	for (i = 1; i <= 32; i++)
	{
		putchar(mask & value ? '1' : '0');
		value <<= 1;
		if (i % 8 == 0) putchar(' ');
	}
	return 0;
}

int kratnosc()
{

		setlocale(LC_CTYPE, "Russian");
		int A, i; char tmp[33];
		cout << "Введите число ";
		cin >> A;
		_itoa_s(A, tmp, 2);

		cout << "Число в двоичном виде = " << tmp << endl;
		if ((A & 15) == 0)
			cout << "Число кратно 16" << endl;
		else
			cout << "Число не кратно 16" << endl;
		return 1;
	}

int slojzno()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	cout << "Первое число="; cin >> A;
	cout << "Второе число="; cin >> B;

	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;

	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;

	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;

	_itoa_s(B & maskB, tmp, 2);
	cout << " Очищены биты в B: " << tmp << endl;

	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
	cout << " Результат B=" << tmp << endl;
	return 2;
}




int main() {
	setlocale(LC_ALL, "RUS");
	int g = 0;
	cout<<"Номер задания - "<< endl;
	cin >> g;
	(g == 1) ? kratnosc() : (g == 2) ? slojzno() : dvoichnyjcode();
}
