#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "");
    int n; errno_t err;
    FILE* f;
    FILE* g;
    FILE* q;
    printf("Write size of array");
    cin >> n;
    err = fopen_s(&f, "1.txt", "w");

    if (err != 0) {
        return EXIT_FAILURE;
    }
    int** mas = new int* [n];
    for (int i = 0; i < n; i++)
    {
        mas[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mas[i][j] = rand() % 10;
            fprintf(f, "%d ", mas[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);

    err = fopen_s(&f, "2.txt", "w");

    int r;
    printf("Write size of array");
    cin >> r;
    int** masarr = new int* [r];

    for (int j = 0; j < r; j++)
    {
        masarr[j] = new int[1];
    }

    for (int j = 0; j < r; j++) {
        masarr[j][0] = rand() % 10;
        fprintf(f, "%d ", mas[j][0]);
        fprintf(f, "\n");
    }
    fclose(f);

    err = fopen_s(&f, "3.txt", "w");


    int** arrmas = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arrmas[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        arrmas[i][0] = 0;
        for (int j = 0; j < n; j++)
        {
            arrmas[i][0] += mas[i][j] * masarr[j][0];
        }

    }

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d ", arrmas[i][0]);
        fprintf(f, "\n");
    }


    fclose(f);
}