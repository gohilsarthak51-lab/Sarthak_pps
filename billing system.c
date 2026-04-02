#include <stdio.h>

int main() 
{
    float headphones = 1000.0;
    float keyboard = 1100.0;
    float mouse = 900.0;
    float speaker = 1200.0;
    float powerbank = 1050.0;

    int a, b, c, d, e;

    float total = 0, discount = 0, final_bill;

    printf("========================================\n");
    printf("        TechNest Electronics Store      \n");
    printf("========================================\n");

    printf("Enter quantity of Headphones (Rs 1000): ");
    scanf("%d", &a);

    printf("Enter quantity of Keyboard (Rs 1100): ");
    scanf("%d", &b);

    printf("Enter quantity of Mouse (Rs 900): ");
    scanf("%d", &c);

    printf("Enter quantity of Speaker (Rs 1200): ");
    scanf("%d", &d);

    printf("Enter quantity of Power Bank (Rs 1050): ");
    scanf("%d", &e);

    total = (a * headphones) +
            (b * keyboard) +
            (c * mouse) +
            (d * speaker) +
            (e * powerbank);

    if (total > 20000) {
        discount = total * 0.12;
    } else if (total > 10000) {
        discount = total * 0.09;
    } else if (total > 5000) {
        discount = total * 0.06;
    }

    final_bill = total - discount;

    printf("\n\n============== RECEIPT ==============\n");

    printf("-------------------------------------\n");
    printf("%-15s %5s %10s\n", "Item", "Qty", "Price");
    printf("-------------------------------------\n");

    if (a > 0)
        printf("%-15s %5d %10.2f\n", "Headphones", a, a * headphones);
    if (b > 0)
        printf("%-15s %5d %10.2f\n", "Keyboard", b, b * keyboard);
    if (c > 0)
        printf("%-15s %5d %10.2f\n", "Mouse", c, c * mouse);
    if (d > 0)
        printf("%-15s %5d %10.2f\n", "Speaker", d, d * speaker);
    if (e > 0)
        printf("%-15s %5d %10.2f\n", "PowerBank", e, e * powerbank);

    printf("-------------------------------------\n");
    printf("%-20s %10.2f\n", "Total Amount:", total);
    printf("%-20s %10.2f\n", "Discount:", discount);
    printf("%-20s %10.2f\n", "Final Amount:", final_bill);
    printf("-------------------------------------\n");
    printf("      Thank You! Visit Again!!!\n");

    return 0;
}