/*

Write a program that prints its input one word per line.

*/

#include <stdio.h>

#define IN 1  /* the state char is inside of a word */
#define OUT 0 /* the state char is outside of a word */

int main()
{
    char character;
    int state = OUT;

    while ((character = getchar()) != EOF)
    {
        if (character == ' ' || character == '\t' || character == '\n')
        {
            if (state == IN)
            {
                putchar('\n');
                state = OUT;
            }
            continue;
        }
        else if (state == OUT)
            state = IN;
        putchar(character);
    }

    return 0;
}