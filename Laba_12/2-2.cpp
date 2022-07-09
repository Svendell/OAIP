#include <stdint.h>

// size_t
// SIZE_MAX

#include <stdio.h>

// feof
// fflush
// fgets
// perror
// printf

#include <stdlib.h>

// NULL

#include <string.h>

// strtok
// strlen
#include <cstring>


enum { SIZE = 200 };

static const char delims[] = "\t\n\r ";

int main()
{
    char s[SIZE];

    printf("enter a sentence: ");
    fflush(stdout);
    char* res = fgets(s, SIZE, stdin);
    if (!res && !feof(stdin)) {
        perror("can't get the sentence");
        return 1;
    }

    char* max_word = NULL;
    char* min_word = NULL;

    size_t max_len = 0;
    size_t min_len = SIZE_MAX;

    for (char *word = strtok_s(s, delims); word != NULL;
        word = strtok_s(NULL, delims)) {
        size_t len = strlen(word);

        if (len > max_len) {
            max_len = len;
            max_word = word;
        }

        if (len < min_len) {
            min_len = len;
            min_word = word;
        }
    }

    printf("the longest word is: %s\n", max_word);
    printf("the shortest word is: %s\n", min_word);

    return 0;
}
