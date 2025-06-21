#include <stdio.h>

float calculate_expression(float x, float y);


int main() {
    int n;
    float x[10], y[10], result[10];
    char choice;

    do {
        printf("Enter number of input pairs (1-10): ");
        scanf("%d", &n);

        if(n < 1 || n > 10) {
            printf("Invalid number of pairs. Try again.\n");
            continue;
        }

        for(int i = 0; i < n; i++) 
        {
            printf("Enter x%d, y%d: ", i+1, i+1);
            scanf("%f %f", &x[i], &y[i]);
            result[i] = calculate_expression(x[i], y[i]);
        }

        printf("=== Results ===\n");
        printf("x     y     2x^2 - 4y^2 + 10\n");
        for(int i = 0; i < n; i++) 
        {
            printf("%.2f  %.2f  %.2f\n", x[i], y[i], result[i]);
        }

        printf("Calculate again? (y/n): ");
        scanf(" %c", &choice); 
    } while(choice == 'y'|| choice =='Y');

    return 0;
}
float calculate_expression(float x, float y) 
{
    return 2 * x * x - 4 * y * y + 10;
}
