# include <stdio.h>

# define LOWER 0 /* The lowest number in the fahrenheit*/
# define UPPER 300 /* The Top most number in the fahrenheit*/
# define STEP 20 /* The step from number in the fahrenheit*/

int main() {
 
    // So we want to print Fahrenheit and Celsius from 0 to 300 with step of 20
    // THis program can also written using for-loop in a concise way

    float fahrenheit, celsius;

    fahrenheit = LOWER;
    while (fahrenheit <= UPPER) {
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("%-10.3f%-10.3f\n", fahrenheit, celsius);
        fahrenheit += STEP;
    }

    return 0;
}