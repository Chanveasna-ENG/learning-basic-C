/*

Write a program to print a histogram of the frequencies
of different characters in its input.

*/

#include <stdio.h>
#define TOTAL_CHARS 128

int main(void) {
    int c, i, j;
    int charArray[TOTAL_CHARS];

    for (i = 0; i < TOTAL_CHARS; ++i) {
        charArray[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        charArray[c] = charArray[c] + 1;
    }

    for (i = 0; i < TOTAL_CHARS; ++i) {
        putchar(i);

        for (j = 0; j < charArray[i]; ++j)
            putchar('*');

        putchar('\n');
    }
    return 0;
}