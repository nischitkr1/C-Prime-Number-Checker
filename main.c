// c prime number checker
#include <stdio.h>

int main()
{
    // variables to store values in integer
    int num, isPrime = 0;
    // pirnt a message as the title of the program
    printf("C Prime Number Checker\n");
    // input a value as the number to check the condition from the user
    printf("Enter Number: ");
    // store the value in the 'num' variable
    scanf("%d", &num);
    // if the vale of 'i' variable is less than equal to 'num' variable
    for (int i = 1; i <= num; i++)
    {
        // if the modulo of the values of 'num' and 'i' variables
        if (num % i == 0)
        {
            // define the value of 'isPrime' variable as the sum of 'isPrime' and 1
            isPrime += 1;
        }
    }
    // if the value of 'isPrime' variable is equal to 2
    if (isPrime == 2)
    {
        // print the condtion as true
        printf("%d is a Prime Number!", num);
    }
    else
    {
        // print the condition as false
        printf("%d is not a Prime Number!", num);
    }
    return 0;
}