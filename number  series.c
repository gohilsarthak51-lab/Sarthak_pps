#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
    }

    return 0;
}