#include <stdio.h>

int main() {
    float a, b;

    printf("Enter the value of a and b: ");
    scanf("%f %f", &a, &b);

    printf("Addition = %.2f\n", a + b);
    printf("Subtraction = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);
    printf("Division = %.2f\n", a / b);

    // Type casting for modulus
    printf("Modulus = %d\n", (int)a % (int)b);

    return 0;
}

/* output value
Enter the value of a and b: 100   20
 Addition = 120.000000
 Subtraction = 80.000000
 Multiplication = 2000.000000
 Division = 5.000000
 Modulus = 0  */
