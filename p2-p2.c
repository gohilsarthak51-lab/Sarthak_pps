#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter marks out of 100\n");

    printf("English: ");
    scanf("%d", &m1);
    if (m1 > 100 || m1 < 0) {
        printf("Invalid marks in English!\n");
        return 0;
    }

    printf("Maths: ");
    scanf("%d", &m2);
    if (m2 > 100 || m2 < 0) {
        printf("Invalid marks in Maths!\n");
        return 0;
    }

    printf("G.K.: ");
    scanf("%d", &m3);
    if (m3 > 100 || m3 < 0) {
        printf("Invalid marks in G.K.!\n");
        return 0;
    }

    printf("S.S.T.: ");
    scanf("%d", &m4);
    if (m4 > 100 || m4 < 0) {
        printf("Invalid marks in S.S.T.!\n");
        return 0;
    }

    printf("Science: ");
    scanf("%d", &m5);
    if (m5 > 100 || m5 < 0) {
        printf("Invalid marks in Science!\n");
        return 0;
    }

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\n------ STUDENT MARKSHEET ------\n");
    printf("Marks of English: %d\n", m1);
    printf("Marks of Maths: %d\n", m2);
    printf("Marks of G.K.: %d\n", m3);
    printf("Marks of S.S.T.: %d\n", m4);
    printf("Marks of Science: %d\n", m5);

    printf("-------------------------------\n");
    printf("Total Marks: %d\n", total);
    printf("Percentage: %f\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    }
    else if (percentage >= 75) {
        printf("Grade: B\n");
    }
    else if (percentage >= 60) {
        printf("Grade: C\n");
    }
    else if (percentage >= 40) {
        printf("Grade: D\n");
    }
    else {
        printf("Result: Fail\n");
    }

    return 0;
}
