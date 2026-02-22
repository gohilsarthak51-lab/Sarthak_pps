#include <stdio.h>

int main() {
    int s = 0;

    while (s <= 255) {
        printf("ASCII Value: %d \t Character: %c\n", s, s);
        s++;
    }

    return 0;
}