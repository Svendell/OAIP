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
    /*�������� �����*/
    err = fopen_s(&f, "a.txt", "w");
    if (err != 0)
    {
        perror("���������� ������� ����\n");
        return EXIT_FAILURE;
    }
    /*������ �������� � ����*/

    printf("������� ��� ��������\n");
    cin >> cols;
    fprintf(f, "%d\n", cols);

    /*�������� ������� � ������ � � ����*/
    /*���������� �������� �������*/
    int* A; /* ���� * ����� ������ �������, ��� * ����� �������, ��� * ����� ��������������*/
    srand((unsigned)time(NULL));
    A = new int[cols];
    for (int numb2 = 0; numb2 < cols; numb2++) {
        A[numb2] = rand() % 10;
        fprintf(f, "%d ", A[numb2]);
    }

    fclose(f);

    // 2 ����������� �����

    ifstream input("a.txt"); //
    float ch; // �������� �������� ���������� ��� �����
    int Count = 0;
    while (input >> ch) //
        Count++;
    cout << "����� � ����� : " << Count << endl;
    input.close();


    int* mass = new int[Count]; //������ ������ � ��������� ��� ������
    ifstream file("a.txt"); //

    int cols2;

    file >> cols2;// ������ �������

    //������ ����� ���������� ���������������

    /*�������� ����� 2*/

    errno_t file_b;
    FILE* b;

    file_b = fopen_s(&b, "b.txt", "w");
    if (file_b != 0)
    {
        perror("���������� ������� ����\n");
        return EXIT_FAILURE;
    }

    /*�.�.����������� ������� ��������� ���������� Count, � 1 �������� �� �����
    ��� ���������, ��������� ������ � ����� �� 1*/
    

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

//    /*���������� �������� �� ����� '�' � ������*/
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
//    printf("������ �������� � ���� b.txt\n");
//
//
    return 0;
}