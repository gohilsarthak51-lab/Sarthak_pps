#include<stdio.h>
int main()
{
  int num,sum,choice,a,b,c,n,digit;
  
  do{
    printf("\t___________________________________________________________\t\n");
     printf("\t============================MENU===========================\t\n");
     printf("\t-----------------------------------------------------------\t\n");
     printf("\t1. Check Number is Even Or Odd\t\n");
     printf("\t2. Check Number is Positive or Negative\t\n");
     printf("\t3. Find the greatest of the Numbers\t\n");
     printf("\t4. Find Sum of Digits\t\n");
     printf("\t5. Exit\t\n");
     printf("Enter Value of Your Choice Between 1 to 5\n");
     scanf("%d", &choice);
     
     switch(choice)
      {   
           case 1:
           {
             printf("Enter a Number:\n");
             scanf("%d", &num);
             if (num %2 == 0)
             printf("The given number is an even number.\n");
             else
             printf("The given number is an odd number.\n");
             
             break;
          }
          
          case 2:
          {
             printf("Enter a Number:\n");
             scanf("%d", &num);
             if (num >= 0)
             printf("The given number is Positive\n");
             else
             printf("The given number is Negative\n");
             
             break;
          }
          
          case 3:
          {
            printf("Enter Three Numbers\n");
            scanf("%d %d %d",&a,&b,&c);
            if( a==b && b==c)
            printf("ALL THE NUMBER ARE SAME\n %d", a);

            else if ( a>=b && a>=c)
            printf("A = %d IS GREATEST VALUE %d\n", a);

            else if ( b>=a && b>=c)
            printf(" B = %d IS GREATEST VALUE \n", b);

            else if ( c>=a && c>=b)
            printf("C = %d IS GREATEST VALUE \n", c);
            
            break;
          }
          
          case 4:
          {
                printf("Enter a number:\n");
                scanf("%d", &n);
                sum = 0;
                while(n != 0) {
                    digit = n % 10;
                    sum += digit;
                    n = n / 10;
          
                }
                printf("The Sum of Digit of given number is %d\n",sum);
               break;
          }
   
      }
  } while (num != 5);
}
