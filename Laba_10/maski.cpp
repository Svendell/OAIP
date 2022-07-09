#include <iostream> 
using namespace std;

int main(){


    setlocale(LC_CTYPE, "Russian");
int A, n, p; char num[33];
cout << "Введите число А ";
cin >> A;
cout << endl;
cout << "Введите c какого бита начинать замену ";
cin >> p;
cout << endl;
cout << "Скольно битов заменяем на 0 ";
cin >> n;
cout << endl;

//в двоичном виде
_itoa_s(A, num, 2);

cout << "Число А в двоичном  виде: " << num << endl;

//Создаю маску, одна равна единице, которая сдвинута на p-1 влево
unsigned int mask = 1 << p - 1;


//Далее происходит инвертирование
for (int i = 0; i <= n; i++) {
    A ^= mask;
    mask <<= 1;
}

_itoa_s(A, num, 2);

cout << "Итоговое число: " << num << endl;
return 0;
}

//void toBinary(size_t value)
//{
//   const unsigned int mask = 1 << 31;
//    for (size_t i = 1; i <= 32; i++)
//    {
//        putchar(mask & value ? '1' : '0');
//        value <<= 1;
//        if (i % 8 == 0)  putchar(' ');
//    }
