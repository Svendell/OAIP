#include <fstream>
#include <stdio.h>
#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "");
    int cols;
    errno_t err;
    FILE* f;
    /*Создание файла*/
    err = fopen_s(&f, "a.txt", "w");
    if (err != 0)
    {
        perror("Невозможно создать файл\n");
        return EXIT_FAILURE;
    }
    /*Запись значений в файл*/

    printf("Введите кол столбцов\n");
    cin >> cols;
    fprintf(f, "%d\n", cols);

    /*Создание матрицы и запись её в файл*/
    /*Присвоение значений массиву*/
    int* A; /* одна * когда массив простой, две * когда матрица, три * когад параллелепипед*/
    srand((unsigned)time(NULL));
    A = new int[cols];
    for (int numb2 = 0; numb2 < cols; numb2++) {
        A[numb2] = rand() % 10;
        fprintf(f, "%d ", A[numb2]);
    }

    fclose(f);

    // 2 независамая часть

    ifstream input("a.txt"); //
    float ch; // создание мусорной переменной для ходов
    int Count = 0;
    while (input >> ch) //
        Count++;
    cout << "Чисел в файле : " << Count << endl;
    input.close();


    int* mass = new int[Count]; //создаём массив и указываем его размер
    ifstream file("a.txt"); //

    int cols2;

    file >> cols2;// первый элемент

    //чтение строк происходит последовательно

    /*Создание файла 2*/

    errno_t file_b;
    FILE* b;

    file_b = fopen_s(&b, "b.txt", "w");
    if (file_b != 0)
    {
        perror("Невозможно создать файл\n");
        return EXIT_FAILURE;
    }

    /*т.к.размерность массива указывали переменной Count, а 1 значения из файла
    уже прочитаны, уменьшаем чтение в цикле на 1*/
    

    int max=0;
    for (int i = 0; i < (Count - 1); i++) {
        file >> mass[i];
        if (max < mass[i]) {
            max = mass[i];
        }
    }
    cout << "max = " << max << endl;

    int povtor = 0, schiot = 0, chisloo, izfila=0;


    for (int p = 0; p <= max; p++) {
        chisloo = p;
            for (int i = 0; i < (Count - 1); i++) {
                    file >> mass[i];
                    izfila = mass[i];

                    if (chisloo == izfila) {
                        schiot++;
                    };
                   
            };
            if (schiot == 2) {
                fprintf(b, "%d ", chisloo);
            };
            schiot = 0;
    }
    fclose(b);

//    /*записываем элемееты из файла 'а' в массив*/
//    for (int i = 0; i < (Count - 1); i++) {
//        file >> mass[i];
//    }
//
//    int test = 0, testfail = 0;
//
//    for (int i = 0; i < (Count - 1); i++) {
//        test = mass[i];
//        for (int r = 0; r < (Count - 1); r++) {
//            if (test == mass[r] && r != i) {
//                testfail = 1;
//            }
//        }
//        if (testfail == 2) {
//            fprintf(b, "%d ", test);
//        }
//
//        testfail = 0;
//    }
//
//    fclose(b);
//    printf("Данные записаны в файл b.txt\n");
//
//
    return 0;
}