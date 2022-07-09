#include<iostream>
#include<locale>
#include <string.h>

using namespace std;
void main() {
    setlocale(LC_CTYPE, "Russian");
    char c[100];
    cout << "Введите предложение: "; gets_s(c);
    for (int i = 1; c[i] != 0; i++)
    {
        if (c[i] == ' ')
        {
            cout << c[i - 1];
        }
    }
    cout << endl;
    system("pause");
}
