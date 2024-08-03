# include <stdio.h>


int main(){

    // ECHO program
    long numChar = 0;
    char c;

    while ((c = getchar()) != EOF){
        putchar(c);
        numChar++;
    }
    printf("%ld", numChar);

    return 0;
}