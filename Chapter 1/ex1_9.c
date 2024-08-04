/*

Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank.

*/

#include <stdio.h>

/* count lines in input */

#define BLANK 1    /* previous state blank*/
#define NO_BLANK 0 /* previous state not blank*/

int main()
{
    int c;
    int previous;

    previous = NO_BLANK;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && previous == BLANK)
            previous = NO_BLANK;
        else if (c == ' ' && previous == NO_BLANK)
            previous = BLANK;
        else if (c == ' ' && previous == BLANK)
            continue;
        putchar(c);
    }

    return 0;
}