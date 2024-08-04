/*

Exercise 1-1. Run the ``hello, world'' program on your system. 
Experiment with leaving out parts of the program, to see what error messages you get.

*/

# include <stdio.h>

/*
    ex1_1.c: In function 'main':
    ex1_1.c:12:5: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
        printf("Hello, this wonderful world of C programming.");
        ^~~~~~
    ex1_1.c:12:5: warning: incompatible implicit declaration of built-in function 'printf'
    ex1_1.c:12:5: note: include '<stdio.h>' or provide a declaration of 'printf'
    ex1_1.c:1:1:
    +#include <stdio.h>
    /*
    ex1_1.c:12:5:
        printf("Hello, this wonderful world of C programming.");
        ^~~~~~
    Hello, this wonderful world of C programming.

*/

int main(){

    printf("Hello, this wonderful world of C programming.");

    /* 
    ex1_1.c: In function 'main':
    ex1_1.c:12:60: error: expected ';' before 'return'
        printf("Hello, this wonderful world of C programming.")
                                                                ^
                                                                ;
    ex1_1.c:14:5:
        return 0;
        ~~~~~~
    */

    return 0; // no error without this line?
}