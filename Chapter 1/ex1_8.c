/*
Write a program to count blanks, tabs, and newlines
*/

#include <stdio.h>

/* count lines in input */

int main()
{
    int c, nline, nblank, ntab;
    nline = nblank = ntab = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nline;
        else if (c == ' ')
            ++nblank;
        else if (c == '\t')
            ++ntab;

    printf("New Line: %d\nBlank: %d\nTab: %d\n", nline, nblank, ntab);

    return 0;
}