#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int choice, i, length;

    while (1)
     {
        printf("\n--------------------------------WELCOME----------------------------------\n");
        printf("\nTell me your choice\n");
        printf("\n1. Reverse a String\n");
        printf("2. Convert String to Uppercase\n");
        printf("3. Convert String to Lowercase\n");
        printf("4. Find Length  of a String\n");
        printf("5. Exit The Program\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 5) 
        {
            break;
        }

        printf("Enter string: ");
        gets(str);  

        switch (choice) 
        {
            case 1:
                length = strlen(str);
                printf("Reversed: ");
                for (i = length - 1; i >= 0; i--) 
                {
                    printf("%c", str[i]);
                }
                printf("\n");
                break;

            case 2:
                for (i = 0; str[i] != '\0'; i++) 
                {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                printf("Uppercase: %s\n", str);
                break;

            case 3:
                for (i = 0; str[i] != '\0'; i++) 
                {
                    if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }
                printf("Lowercase: %s\n", str);
                break;

            case 4:
                length = strlen(str);
                printf("Length: %d\n", length);
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
