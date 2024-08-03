# include <stdio.h>
# include <math.h>

int main() {
    printf("Calculator App!\n");
    printf("Available operator + - * /\n");
    printf("wirte in this format: a + b\n");

    double operant1, operant2, result;
    char operator;

    printf("> ");

    scanf("%lf", &operant1);
    scanf(" %c", &operator);
    scanf("%lf", &operant2);

    switch(operator){
        case '+':
            result = operant1 + operant2;
            break;
        case '-':
            result = operant1 - operant2;
            break;
        case '*':
            result = operant1 * operant2;
            break;
        case '/':
            if (operant2 == 0){
                printf("Cannot divide by Zero!");
                return 1;
            }
            result = operant1 / operant2;
            break;
        default:
            printf("Invalid Operator!\n");
            printf("%lf %lf %lf", operant1, operator, operant2);
            return 1;
    }

    printf("%.2lf\n", result);
    return 0;    
}
