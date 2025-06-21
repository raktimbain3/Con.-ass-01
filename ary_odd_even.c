#include <stdio.h>

int main()
{
    int n[10];
    int odd[10], even[10];
    int oddcount = 0, evencount = 0;
    float sumodd = 0, sumeven = 0;
    float aveodd, aveeven;

    printf("Enter 10 numbers: \n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d: ", i + 1);
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

    for(int i = 0; i < evencount; i++)
    {
        sumeven = sumeven + even[i];
    }

    for(int i = 0; i < oddcount; i++)
    {
        sumodd = sumodd + odd[i];
    }

    aveeven = sumeven / evencount;
    aveodd = sumodd / oddcount;

    printf("Odd numbers: ");
    for(int i = 0; i < oddcount; i++)
    {
        if(i == oddcount - 1)
            printf("%d\n", odd[i]);
        else
            printf("%d, ", odd[i]);
    }

    printf("Sum of odd numbers: %.0f\n", sumodd);
    printf("Average of odd numbers: %.2f\n", aveodd);

    printf("Even numbers: ");
    for(int i = 0; i < evencount; i++)
    {
        if(i == evencount - 1)
            printf("%d\n", even[i]);
        else
            printf("%d, ", even[i]);
    }

    printf("Sum of even numbers: %.0f\n", sumeven);
    printf("Average of even numbers: %.2f\n", aveeven);

    return 0;
}
