#include <stdio.h>

int main()
{
    int num, isPrime = 0;
    printf("C Prime Number Checker\n");
    printf("Enter Number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime += 1;
        }
    }
    if (isPrime == 2)
    {
        printf("%d is a Prime Number!", num);
    }
    else
    {
        printf("%d is not a Prime Number!", num);
    }
    return 0;
}