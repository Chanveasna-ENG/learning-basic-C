/*
Experiment to find out what happens when prints's argument string contains \c, 
where c is some character not listed above.

listed: \n \t \b \\
*/

# include <stdio.h>

int main(){

    printf("Hello, this wonderful world of C programming.\p");

    return 0;
}

/*
    ex1_2.c: In function 'main':
    ex1_2.c:12:12: warning: unknown escape sequence: '\p'
        printf("Hello, this wonderful world of C programming.\p");
                ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    Hello, this wonderful world of C programming.p
*/