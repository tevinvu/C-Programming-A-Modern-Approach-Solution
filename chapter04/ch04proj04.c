#include <stdio.h>

int main(void)
{
    int  x, a, b, c, d, e, y;
    printf("Enter a number between 0 and 32767: ");
    scanf(" %d", &x) ;
    y = x / 8;
    a = x % 8;
    b = y % 8;
    c = y / 8 % 8;
    d = y / 8 /8 % 8;
    e = y / 8 / 8 / 8 % 8;
    printf("In octal, your number is : %d%d%d%d%d", e, d, c, b, a);

    printf("\n");
    return 0;
}


//run:
//make ch04proj04
//./ch04proj04