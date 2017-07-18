#include <stdio.h>

int main(void)
{
    int r;
    printf("Enter the radius: ");
    scanf(" %d", &r);
    float pi = 3.14;
    printf("Volume of a sphere: %.2f", 4.0f/3.0f * pi * r * r * r);
    printf("\n");
    return 0;
}


//run:
//make ch01proj03
//./ch01proj03