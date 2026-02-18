#include <stdio.h>

int main() {
    int a, i;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a <= 1) {
        printf("%d is not a Prime number.\n", a);
    } 
    else {
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                printf("%d is not a Prime number.\n", a);
               
            }
        }

        // If loop completes without finding factor
        printf("%d is a Prime number.\n", a);
    }

    return 0;
}
