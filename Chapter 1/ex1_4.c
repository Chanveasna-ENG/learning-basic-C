/*
Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

int main()
{
    float Fahrenheit, celsius;
    float lower, upper, step;
    lower = 0;   /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    celsius = lower;

    printf("%-15s%-15s\n", "Celsius", "Fahrenheit");

    while (celsius <= upper)
    {
        Fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%-15.0f%-15.0f\n", celsius, Fahrenheit);
        celsius += step;
    }

    return 0;
}