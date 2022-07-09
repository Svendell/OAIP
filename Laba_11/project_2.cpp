#include <iostream>


using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    int num, z, n=0, p=0, k; // размер массива
    cout << "Кол-во значений в массиве: ";
    cin >> num; // получение от пользователя размера массива

    int* Arr = new int[num]; // Выделение памяти для массива  *(Arr+i) - указатель Arr[i] -id

    for (int i = 0; i < num; i++)
    {
        *(Arr + i) = rand() % 99;
    }

    // И выводим заполненный массив.

    cout << "\nВаш массив A: ";

    for (int i = 0; i < num; ++i) {
        cout << *(Arr + i) << " ";
    }


    for (int i = 0; i < num; i++)
    {
        z = *(Arr + i);

        for (int i = 0; i < num; i++)
        {
            if (z != *(Arr + i)) {
                n = n + 1;
            };
            if (z == *(Arr + i)) {
                p = p + 1;
            }
        }
    }
        k = (n-p) / (num - 1);
        cout << "\nКол-во различных элементов : " << k;
        delete[] Arr;

    }
    //
 
