#include <stdio.h>

int main() 
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("\n------ STUDENT MARKSHEET ------\n");
    printf("Enter marks out of 100\n");

    do {
        printf("English: ");
        scanf("%d", &m1);
        if (m1 < 0 || m1 > 100)
            printf("Please enter marks between 0 and 100.\n");
    } while (m1 < 0 || m1 > 100);

    do {
        printf("Maths: ");
        scanf("%d", &m2);
        if (m2 < 0 || m2 > 100)
            printf("Please enter marks between 0 and 100.\n");
    } while (m2 < 0 || m2 > 100);

    do {
        printf("G.K.: ");
        scanf("%d", &m3);
        if (m3 < 0 || m3 > 100)
            printf("Please enter marks between 0 and 100.\n");
    } while (m3 < 0 || m3 > 100);

    do {
        printf("S.S.T.: ");
        scanf("%d", &m4);
        if (m4 < 0 || m4 > 100)
            printf("Please enter marks between 0 and 100.\n");
    } while (m4 < 0 || m4 > 100);

    do {
        printf("Science: ");
        scanf("%d", &m5);
        if (m5 < 0 || m5 > 100)
            printf("Please enter marks between 0 and 100.\n");
    } while (m5 < 0 || m5 > 100);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\n------ RESULT ------\n");
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f\n", percentage);

    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 75)
        printf("Grade B\n");
    else if (percentage >= 60)
        printf("Grade C\n");
    else if (percentage >= 40)
        printf("Grade D\n");
    else
        printf("Fail\n");

    return 0;
}
