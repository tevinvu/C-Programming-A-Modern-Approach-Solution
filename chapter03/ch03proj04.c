#include <stdio.h>

int main(void)
{
   int area, num1, num2;
   printf("Enter phone number (xxx) xxx-xxxx: ");
   scanf(" (%d) %d-%d", &area, &num1, &num2);
   printf("You enter: %d.%d.%d\n", area, num1, num2);
   

    printf("\n");
    return 0;
}
 

//run:
//make ch02proj04
//./ch02proj04
