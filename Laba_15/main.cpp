#include<iostream>
#include<cstdlib>

float massiv(char* arr, char* arr1, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[(i + 1)];
        if (i == (size - 1)) {
            arr[i] = arr1[0];
        }
    }
        return *arr;
                        }
void main() {
    using namespace std;
    char* arr;
    char* arr1;
    int size;
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива :" << endl;
    cin >> size;
    arr = new char[size];
    arr1 = new char[size];
    cout << "Заполните массив :" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        arr1[i] = arr[i];
        cout << endl;
    }

    (*massiv)(arr, arr1, size);
        
        for (int i = 0; i < size; i++)
            cout << " " << arr[i];


    delete[] arr;
    delete[] arr1;

}
