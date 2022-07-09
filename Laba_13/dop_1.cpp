# include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    ///  Размер массива
    int n;
    cout << " Введите размер матрицы ( матрица 2N = N x N) N=";
    cin >> n;
    n = 2 * n;
    // Выделяем память под динам массив
    int** Mas = new int* [n];
    for (int i = 0; i < n; ++i)
        Mas[i] = new int[n];
    // Заполняем массив
    cout << "Enter\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> Mas[i][j];
        }
    }
    //Заполнили
    // 
    // Выводим массив
    cout << "Массив"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Mas[i][j] << " ";
        }
        cout << "\n";
    }
    // меняем местами квадраты

    cout << "Массив" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Mas[i][j] << " ";
        }
        cout << "\n";
    }
    // Очищаем память
    for (int i = 0; i < n; i++)
        delete[] Mas[i];
    delete[] Mas;
    return 0;
}
