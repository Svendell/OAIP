#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, z; // размер массива
    cout << "Кол-во значений в массиве: ";
    cin >> num; // получение от пользователя размера массива

    int* Arr = new int[num]; // Выделение памяти для массива
    for (int i = 0; i < num; i) {
        // Заполнение массива и вывод значений его элементов
        int n;
        cout << "\nВведите значение элемента массива : ";
        cin >> n;
        if (n < 1) {
            cout << "Введите натуральное число";
           
        }
        else {
            Arr[i] = n;
            i++;
            cout << "[" << i << "] " << n << endl;
        }
    }
    // И выводим заполненный массив.
    cout << "\nВаш массив: ";

    for (int i = 0; i < num ; ++i) {
        cout << Arr[i] << " ";
    }
      

// Восстанавливаем порядок

    int imax, i1;
    for(int i = 0; i <(num-1); i++)
    {
      imax = i;
      for (i1 = i + 1; i1 < num; i1++)
      {
          if (*(Arr + i1) > *(Arr + imax))
              imax = i1;
      }
      swap(Arr[i], Arr[imax]);
  }
  for (int i = 0; i < num; i++) {

      cout << " " << Arr[i];
  }

  // max и min значения
  int n, p, k;
  for (int i = 0; i < (num-1); i++)
  {
      z = *(Arr + i);
         k = *(Arr + (i + 1));

      if ((z - k) != 1) {
          p = k + 1;
      };
  };
  cout << "\nэлемент : " << p;





    cout << "\n";
    delete[] Arr; // очистка памяти
    return 0;
}
