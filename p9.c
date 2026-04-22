#include <stdio.h>

int main() 
{
    FILE *fp;
    long int size;
    char ch;

    fp = fopen("reverse.txt", "r"); 
    if (fp == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }   
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    for (long int i = size - 1; i >= 0; i--) 
      {
        fseek(fp, i, SEEK_SET);
        ch = fgetc(fp);
        putchar(ch);
      }
    fclose(fp);
    return 0;
}
