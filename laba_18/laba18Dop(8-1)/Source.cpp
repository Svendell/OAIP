#include <stdio.h>
#include <iostream>
int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int fsize;
    int k = 1;
    int a; errno_t err;
    FILE* f;
    int b = rand() % 10;
    int* mas = new int[b];
    err = fopen_s(&f, "nums.txt", "w");
    if (err != 0)
    {
        perror("���������� ������� ����\n");
        return EXIT_FAILURE;
    }
    for (int i = 0; i < b; i++) {
        mas[i] = rand() % 10;
        fprintf(f, "%d ", mas[i]);
    }
    printf("������ �������� � ���� test.txt\n");
    fclose(f);

    err = fopen_s(&f, "nums.txt", "r");
    fseek(f, 0L, SEEK_END);
    fsize = ftell(f);
    fseek(f, 0L, SEEK_SET);
    fclose(f);
    err = fopen_s(&f, "sequence.txt", "w");
    for (int i = 0; i < b; i++) {

        fprintf(f, "%d ", mas[i]);
        fprintf(f, "%d ", mas[b - k]);
        k++;
    }
    fclose(f);
    return 0;
}