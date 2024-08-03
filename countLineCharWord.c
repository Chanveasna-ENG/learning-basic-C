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