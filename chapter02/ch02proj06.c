#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a value of x: ");
    scanf(" %d", &x);
    printf("Polynomial: %d", ((((3 * x + 2) * x - 5) * x- 1) * x + 7) * x - 6);
    printf("\n");
    return 0;
}


//run:
//make ch01proj06
//./ch01proj06