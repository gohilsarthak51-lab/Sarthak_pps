#include <stdio.h>

long long factorial_recursive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

long long factorial_iterative(int n)
{
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int main()
{
    int choice, num;

    while (1)
    {
        printf("\n============================\n");
        printf("     FACTORIAL PROGRAM\n");
        printf("============================\n");
        printf("1. Iterative Method\n");
        printf("2. Recursive Method\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 3)
        {
            printf("\nExiting program...\n");
            break;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Error: Negative number not allowed!\n");
            continue;
        }

        if (num > 20)
        {
            printf("Error: Number too large (max 20)\n");
            continue;
        }

        if (choice == 1)
        {
            printf("Factorial (Iterative) = %lld\n", factorial_iterative(num));
        }
        else if (choice == 2)
        {
            printf("Factorial (Recursive) = %lld\n", factorial_recursive(num));
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
