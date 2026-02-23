#include <stdio.h>

int main()
 {
    int N, i, j;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
     {
        ch = 'A' + (N - i);   
        for(j = 1; j <= i; j++)
         {
            if(i % 2 == 1)
                printf("%c", ch);          
            else
                printf("%c", ch + 32);   
        }

        printf("\n");
    }

    return 0;
}