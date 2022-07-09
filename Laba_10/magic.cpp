#include <iostream> 
using namespace std;
void toBinary(size_t value);
size_t shift_bits(size_t A, size_t n, size_t p);
int main()
{
    setlocale(LC_ALL, "rus");
    size_t A;
    cout << "Введите число А: ";
    cin >> A;
    toBinary(A);
    cout << endl;

    size_t n, p;
    cout << "Введите количество битов n, которое вы хотите установить влево в 0 в числе A: ";// количество битов для инвертирования
    cin >> n;
    cout << endl;
    cout << "Введите с какой позиции хотите установить в ноль n битов влево от позиции p: ";// позиция, нумерация с 0 от старшим битов к младшим
    cin >> p;

    size_t A_after = shift_bits(A, p, n);
    cout << "A = ";
    toBinary(A_after);
    cout << endl;

    size_t maskA = A ^ A_after;
    cout << "Маска для А: ";
    toBinary(maskA);
    cout << endl;

    _itoa_s((A ^ A_after), tmp, 2);
    cout << "Выделенные биты А: " << tmp << endl;

#if 0
    size_t B;
    cout << "Введите число В: ";
    cin >> B;

    cout << endl;
    cout << "Введите количество битов m, которое вы хотите сдвинуть в числе В: ";
    size_t m;
    cin >> m;

    cout << endl;
    cout << "Введите позицию q, для замены битов количеством m в числе B: ";
    size_t q;
    cin >> q;

#endif
    return EXIT_SUCCESS;
}

size_t shift_bits(size_t A, size_t p, size_t n)
{
    A -= p;
    for (int i = 0; i < n; i++)
    {
        A &= ~(1 << i); //Чтобы записать ноль в бит n
    }
    return A;
}

void toBinary(size_t value)
{
    const unsigned int mask = 1 << 31;
    for (size_t i = 1; i <= 32; i++)
    {
        putchar(mask & value ? '1' : '0');
        value <<= 1;
        if (i % 8 == 0)  putchar(' ');
    }
}
