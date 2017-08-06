#include <stdio.h>

int main(void)
{
    char ch;
   printf("Enter phone number: ");
   printf("Phone number is: ");

   while((ch = getchar()) != '\n')
   {
       if(ch == 'A' || ch == 'B' || ch == 'C')
            printf("2");
        else if(ch == 'D' || ch == 'E' || ch == 'F')
            printf("3");
        else if(ch == 'G' || ch == 'H' || ch == 'I')
            printf("4");
        else if(ch == 'J' || ch == 'K' || ch == 'L')
            printf("5");
        else if(ch == 'M' || ch == 'N' || ch == 'O')
            printf("6");
        else if(ch == 'P' || ch == 'R' || ch == 'S')
            printf("7");
        else if(ch == 'T' || ch == 'U' || ch == 'V')
            printf("8");
        else if(ch == 'W' || ch == 'Y' || ch == 'X')
            printf("9");
        else
        {
            printf("%c", ch);
        }    
   }

    printf("\n");
    return 0;
}


//run:
//make ch07proj04
//./ch07proj04