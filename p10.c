//Buggy Program (With Errors)

#include <stdio.h>

int main() {
    int n, i, sum;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", n);   

    printf("Enter elements:\n");
    for (i = 0; i <= n; i++) {  
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];   
    }

    printf("Sum = %d\n", sum);

    return 0;
}

//Corrected Program

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int sum = 0;   // Initialized

    printf("Enter number of elements: ");
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input! Size must be positive.\n");
        return 1;
    }

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {   // Correct condition
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input!\n");
            free(arr);
            return 1;
        }
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    free(arr);
    return 0;
}

/*
Explanation of Corrections

1. Fix in scanf statement
wrong: scanf("%d", n);
correct: scanf("%d", &n);

2. Loop Condition Correction

 wrong:for (i = 0; i <= n; i++)
correct: for (i = 0; i < n; i++)

3. Initialization of Variable

wrong: int sum;
correct: int sum = 0;

4. Dynamic Memory Allocation

Replaced int arr[100]; with:
arr = (int*)malloc(n * sizeof(int));

5. Input Validation
Added checks for:
Invalid input
Non-positive size

6. Memory Management
Added free(arr);
*/
