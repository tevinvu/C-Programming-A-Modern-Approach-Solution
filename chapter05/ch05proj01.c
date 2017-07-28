#include <stdio.h>

int main(void)
{
    int num;
   printf("Enter a number: ");
   scanf(" %d", &num);
   printf("The number %d has ", num);
   if(num >= 0 && num <= 9)
   {
       printf("1 digit");
   }
   else if(num >= 10 && num <= 99)
   {
       printf("2 digits");
   }
   else 
    {
        printf("3 digits");

    }
    printf("\n");
    return 0;
}



//run:
//make ch05proj01
//./ch05proj01
