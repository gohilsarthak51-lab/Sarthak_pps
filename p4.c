#include <stdio.h>
#include <string.h>

void sortArray(int arr[], int n);
void searchArray(int arr[], int n, int key);
void concatStrings(char str1[], char str2[]);
void compareStrings(char str1[], char str2[]);

int main() {
    int choice, subChoice;

    while (1) {
        printf("\n===== WELCOME =====\n");
        printf("\n===== MAIN MENU =====\n");
        printf("1. Array Operations\n");
        printf("2. String Operations\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while(getchar() != '\n'); 
            continue;
        }

        switch (choice) {
            case 1: {
                int arr[100], n, key;

                printf("\nEnter number of elements: ");
                scanf("%d", &n);

                if (n <= 0 || n > 100) {
                    printf("Invalid size!\n");
                    break;
                }

                printf("Enter elements:\n");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }

                printf("\nArray Operations:\n");
                printf("1. Sort Array\n");
                printf("2. Search Array\n");
                printf("Enter your choice: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) {
                    sortArray(arr, n);
                } else if (subChoice == 2) {
                    printf("Enter element to search: ");
                    scanf("%d", &key);
                    searchArray(arr, n, key);
                } else {
                    printf("Invalid choice!\n");
                }
                break;
            }

            case 2: {
                char str1[100], str2[100];

                printf("\nEnter your first string: ");
                scanf(" %[^\n]", str1);
                printf("Enter your second string: ");
                scanf(" %[^\n]", str2);

                printf("\nString Operations:\n");
                printf("1. Concatenate String\n");
                printf("2. Compare String\n");
                printf("Enter your choice: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) {
                    concatStrings(str1, str2);
                } else if (subChoice == 2) {
                    compareStrings(str1, str2);
                } else {
                    printf("Invalid choice!\n");
                }
                break;
            }

            case 3:
                printf("THANK YOU!!!....\n");
                printf("BYEEEEE\n");

                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void searchArray(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            return;
        }
    }
    printf("Element not found!\n");
}

void concatStrings(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

void compareStrings(char str1[], char str2[]) {
    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("First string is smaller.\n");
    else
        printf("First string is greater.\n");
}