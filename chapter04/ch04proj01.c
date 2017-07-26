#include <stdio.h>

int main(void)
{
    int x, a, b;
    printf("Enter a two-digit number: ");
    scanf(" %d", &x);
    if(x > 0)
    {
        a = x % 10;
        b = x / 10;
    }
    printf("The reversal is: %d\n", b + a * 10);
    printf("\n");
    return 0;
}


//run:
//make ch04proj01
//./ch04proj01