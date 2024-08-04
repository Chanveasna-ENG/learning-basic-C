/*

Rewrite the temperature conversion program of Section 1.2
to use a function for conversion.

*/

#include <stdio.h>

/* print Fahrenheit-Celsius table */

float fahr2Cels(int);

int main()
{
    printf("%-15s%-15s\n", "Fahrenheit", "Celsius");

    int fahrenheit;
    for (fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 20)
        printf("%-15d%-15.1f\n", fahrenheit, fahr2Cels(fahrenheit));

    return 0;
}

float fahr2Cels(int fahrenheit){
    return (5.0 / 9.0) * (fahrenheit - 32);
}