#include <stdio.h>

int main(void)
{
    int  a, b, c;
    printf("Enter a three-digit number: ");
    scanf(" %1d%1d%1d", &a, &b, &c);
    
    printf("The reversal is: %d%d%d\n", c,b,a) ;
    printf("\n");
    return 0;
}


//run:
//make ch04proj03
//./ch04proj03