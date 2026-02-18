#include <stdio.h>

int main() {
    int a, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (; a != 0; a = a / 10) {
        digit = a % 10;
        sum = sum + digit;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
