#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int num, total = 1;
    printf("Enter a positive integer: ");
    scanf(" %d", &num);
    printf("Factorial of %d:", num);
    while(num != 0)
    {

        total *= num;
        num = num - 1;
    }
     printf(" %d", total);
    printf("\n");
    return 0;
}


//run:
//  make ch07proj15
//  ./ch07proj15