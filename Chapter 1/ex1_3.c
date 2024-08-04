/*
Modify the temperature conversion program to print a heading above the table.
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
    Fahrenheit = lower;

    printf("%10s%10s\n", "Fahrenheit", "Celsius");

    while (Fahrenheit <= upper)
    {
        celsius = (5.0 / 9.0) * (Fahrenheit - 32.0);
        printf("%10.0f %9.1f\n", Fahrenheit, celsius);
        Fahrenheit = Fahrenheit + step;
    }

    return 0;
}