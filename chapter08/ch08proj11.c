#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>



int main(void)
{
      char ch;
      char phone[15];
      int i = 0;
   printf("Enter phone number: ");
   printf("Phone number is: ");

   while((ch = getchar()) != '\n')
   {
       ch = (toupper)(ch);
       if(ch == 'A' || ch == 'B' || ch == 'C')
            phone[i++] = '2';
        else if(ch == 'D' || ch == 'E' || ch == 'F')
            phone[i++] = '3';
        else if(ch == 'G' || ch == 'H' || ch == 'I')
           phone[i++] = '4';
        else if(ch == 'J' || ch == 'K' || ch == 'L')
            phone[i++] = '5';
        else if(ch == 'M' || ch == 'N' || ch == 'O')
            phone[i++] = '6';
        else if(ch == 'P' || ch == 'R' || ch == 'S')
            phone[i++] = '7';
        else if(ch == 'T' || ch == 'U' || ch == 'V')
            phone[i++] = '8';
        else if(ch == 'W' || ch == 'Y' || ch == 'X')
            phone[i++] = '9';
        else
        {
            phone[i++] = ch;
        }    
   }
   for(i = 0; i < 15; ++i)
    printf("%c",phone[i]);
        printf("\n");
        return 0;
}

// run: make ch08proj11
//      ./ch08proj11

