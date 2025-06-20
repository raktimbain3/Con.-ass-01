#include <stdio.h>

int main()
{
    printf("Basic calculator for '+' '-' '*' '/' of 2 numbers\n");

    float num1, num2;
    char n;

    printf("Enter 1st Number: ");
    scanf("%f", &num1);

    printf("Enter method (+ or - or * or /): ");
    scanf(" %c", &n);  // space before %c is important!

    printf("Enter 2nd Number: ");
    scanf("%f", &num2);

    printf("The ans is: ");

    if (n == '+')
    {
        printf("%f\n", num1 + num2);
    }
    else if (n == '-')
    {
        printf("%f\n", num1 - num2);
    }
    else if (n == '*')
    {
        printf("%f\n", num1 * num2);
    }
    else if (n == '/')
    {
        if (num2 == 0)
        {
            printf("Error! Division by zero.\n");
        }
        else
        {
            printf("%f\n", num1 / num2);
        }
    }
    else
    {
        printf("Invalid operator. Try again.\n");
    }

    return 0;
}
