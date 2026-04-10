#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    float grade;
};

struct Student s[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        printf("Record is full!\n");
        return;
    }

    printf("Enter Student Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("EnterD Student Name: ");
    scanf(" %[^\n]", s[count].name);

    printf("Enter The Grade: ");
    scanf("%f", &s[count].grade);

    count++;
    printf("Student added successfully!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("No records found!\n");
        return;
    }

    printf("\n--------- Student Records ----------\n");
    for (int i = 0; i < count; i++) {
        printf("Roll: %d | Name: %s | Grade: %.2f\n",
               s[i].roll, s[i].name, s[i].grade);
    }
}

void searchStudent() {
    if (count == 0) {
        printf("No records to search!\n");
        return;
    }

    int roll, found = 0;
    printf("Enter Student Roll Number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            printf("Record Found:\n");
            printf("Roll: %d | Name: %s | Grade: %.2f\n",
                   s[i].roll, s[i].name, s[i].grade);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record not found!\n");
}

void modifyStudent() {
    if (count == 0) {
        printf("No records to modify!\n");
        return;
    }

    int roll, found = 0;
    printf("Enter Roll Number to modify: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            printf("Enter new Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter new Grade: ");
            scanf("%f", &s[i].grade);

            printf("Record updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record not found!\n");
}

void deleteStudent() {
    if (count == 0) {
        printf("No records to delete!\n");
        return;
    }

    int roll, found = 0;
    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            for (int j = i; j < count - 1; j++) {
                s[j] = s[j + 1];
            }
            count--;
            printf("Record deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Record not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Modify Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: modifyStudent(); break;
            case 5: deleteStudent(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}