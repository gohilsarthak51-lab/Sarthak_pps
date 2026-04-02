#include <stdio.h>
int main()
{
    int a, i;
    int first=0, second=1, next;

    do
    {
        printf("Enter the term(a) you want in Fibonacci Series:\n");
        scanf("%d", &a);

        if (a < 1)
        {
            printf("Please Enter a Natural Number\n");
        }

    } while (a < 1);

    if (a == 1)
    {
        printf("The %dth term in Fibonacci Series is %d\n", a, first);
    }
    else if (a == 2)
    {
        printf("The %dth term in Fibonacci Series is %d\n", a, second);
    }
    else
    {
        i = 3;
        do
        {
            next = first + second;
            first = second;
            second = next;
            i++;
        } while (i <= a);

        printf("The %dth term in Fibonacci Series is %d\n", a, next);
    }

    return 0;
}