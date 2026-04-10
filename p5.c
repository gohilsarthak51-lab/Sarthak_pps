#include <stdio.h>

int main() {
    int arr[100], n, i;
    int choice, pos, value;

     printf("\n------------ WELCOME -----------\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n\n--- MAIN MENU ---\n");
        printf("1. Display The Array\n");
        printf("2. Display Element at Position\n");
        printf("3. Update The Element\n");
        printf("4. Delete The Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Array elements are:\n");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                break;

            case 2:
                printf("Enter position (1-based): ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    printf("Element at position %d is: %d\n", pos, arr[pos - 1]);
                }
                break;

            case 3:
                printf("Enter position to update (1-based): ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    printf("Enter new value: ");
                    scanf("%d", &value);
                    arr[pos - 1] = value;

                    printf("Array after update:\n");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                }
                break;

            case 4:
                printf("Enter position to delete (1-based): ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    for(i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;

                    printf("Array after deletion:\n");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                }
                break;

            case 5:
                printf("\nThank you and byeee \n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    return 0;
}