/*

How would you test the word count program? 
What kinds of input are most likely to uncover bugs if there are any?

Answer: random character + word for a few lines.

example:

============================================
qqqqqqqqqqqqqqqqqqqqqqqqq
1
                        ccc                     c       ccc         l   l  l
こんにちは 世界
sas
                c
     ddd   dd d
============================================
Character: 90
Word: 15
Line: 7
*/

# include <stdio.h>

# define IN 1 /* the state char is inside of a word*/
# define OUT 0 /* the state char is outside of a word*/

int main(){

    char character;
    int numLine, numChar, numWord, state;

    numChar = numLine = numWord = 0;
    state = OUT;
    while ((character = getchar()) != EOF){
        numChar++;

        if (character == '\n')
            numLine++;

        if (character == ' ' || character == '\t' || character == '\n')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            numWord++;
        }
    }

    printf("Character: %d\nWord: %d\nLine: %d", numChar, numWord, numLine);

    return 0;
}