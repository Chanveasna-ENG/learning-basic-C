/*
Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0.
*/

#include <stdio.h>
/* print Fahrenheit-Celsius table */
int main()
{
    printf("%-15s%-15s\n", "Fahrenheit", "Celsius");

    int Fahrenheit;
    for (Fahrenheit = 300; Fahrenheit >= 0; Fahrenheit -= 20)
        printf("%-15d%-15.1f\n", Fahrenheit, (5.0 / 9.0) * (Fahrenheit - 32));

    return 0;
}