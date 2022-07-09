#include <iostream>
int main()
{
    setlocale(LC_ALL, "RUS");
    using namespace std;
    int numb, min_pros = 2;
    cout << "Введите число: ";
    cin >> numb;
    cout << "Каноническое разложение: ";
    while (min_pros * min_pros <= numb)
    {
        if (numb % min_pros == 0)
        {
            cout << min_pros;
            numb = numb / min_pros;
            cout << '*';
        }
        else if (min_pros == 2) min_pros = 3;
        else min_pros = min_pros + 2;
    }
    cout << numb;
    return 0;
}
