#include <stdio.h>

int main()
 {
    int num, original, rev = 0, remainder;

    printf("Enter a five-digit integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) 
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }

    if (original == rev)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is NOT a Palindrome number.\n", original);

    return 0;
}