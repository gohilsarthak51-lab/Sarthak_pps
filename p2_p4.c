#include <stdio.h>

int main() 
{
    char ch;

    printf("Enter a input: ");
    scanf(" %c", &ch);

    
    if (ch >= '0' && ch <= '9')
     {
        printf("It is a number.\n");
    }

    
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {

        
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {

            printf("It is a vowel.\n");
        }
        else
         {
            printf("It is a consonant.\n");
        }
    }

    
    else
     {
        printf("It is a special character.\n");
    }

    return 0;
}
