#include <stdio.h>

int main(void)
{
    int x, a, b;
    printf("Enter a integer number: ");
    scanf(" %d", &x);
    if (x < 0)
    {
        printf("Enter a positive number");
        return 0;
    }
    printf("The reverse number is: ");
    do
    {
        a = x % 10;
        x = x / 10;
        if( a != 0)
            printf("%d", a);
    }while(a != 0);
    
    printf("\n");
    return 0;
}


//run:
//make ch06proj05
//./ch06proj05