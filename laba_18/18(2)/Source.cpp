#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "Russian");
    FILE* F1;
    FILE* F2;
    char str[255];
    errno_t err;

    err = fopen_s(&F1, "f1.txt", "w");
    for (int i = 0; i < 6; i++)
    {
        fflush(stdin);
        printf("Строка  %d : \n", i + 1);
        gets_s(str);
        fputs(str, F1);
        fputs("\n", F1);
    }

    fclose(F1);

    err = fopen_s(&F1, "f1.txt", "r");
    err = fopen_s(&F2, "f2.txt", "w");

    while (fgets(str, 255, F1) != NULL)
    {
        if (str[strlen(str) - 2] == 'a')
        {
            fputs(str, F2);
        }
    }
    fclose(F1);
    fclose(F2);
}