#include <stdio.h>

int main()
{
    int n[10];
    int odd[10], even[10];
    int oddcount = 0, evencount = 0;
    int sumeven = 0, sumodd = 0;
    float aveeven, aveodd;

    printf("Input 10 numbers\n");

    for(int i = 0; i < 10; i++)
    {
        printf("No.%d:\n", i + 1);
        scanf("%d", &n[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(n[i] % 2 == 0)
        {
            even[evencount] = n[i];
            evencount++;
        }
        else
        {
            odd[oddcount] = n[i];
            oddcount++;
        }
    }

    printf("Even numbers are: ");
    for(int i = 0; i < evencount; i++)
    {
        printf("%d ", even[i]);
        sumeven += even[i];
    }

    printf("\nOdd numbers are: ");
    for(int i = 0; i < oddcount; i++)
    {
        printf("%d ", odd[i]);
        sumodd += odd[i];
    }

    aveeven = (evencount > 0) ? (float)sumeven / evencount : 0;
    aveodd = (oddcount > 0) ? (float)sumodd / oddcount : 0;

    printf("\nThe sum and average of even numbers are: %d and %.2f", sumeven, aveeven);
    printf("\nThe sum and average of odd numbers are: %d and %.2f\n", sumodd, aveodd);

    return 0;
}
