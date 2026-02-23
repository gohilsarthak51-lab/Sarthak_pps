#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {

        // Print decreasing numbers
        for(j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Print increasing numbers
        for(j = 2; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
