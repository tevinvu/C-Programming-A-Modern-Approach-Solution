#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a value of x: ");
    scanf(" %d", &x);
    printf("Polynomial: %d", 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6);
    printf("\n");
    return 0;
}


//run:
//make ch01proj05
//./ch01proj05