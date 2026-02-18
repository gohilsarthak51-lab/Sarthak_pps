#include <stdio.h>

int main() {
    int a, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &a);

    while (a != 0) {
        digit = a % 10;
        rev = rev * 10 + digit;
        a /= 10;
    }

    printf("Reverse number of the given number = %d\n", rev);

    return 0;
}
