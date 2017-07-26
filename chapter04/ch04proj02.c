#include <stdio.h>

int main(void)
{
    int x, a, b, c;
    printf("Enter a three-digit number: ");
    scanf(" %d", &x);
    if(x > 0)
    {
        a = x % 10;
        b = (x / 10) % 10;
        c = x / 100;
    }
    printf("The reversal is: %d\n", c + b * 10 + a * 100) ;
    printf("\n");
    return 0;
}


//run:
//make ch04proj02
//./ch04proj02