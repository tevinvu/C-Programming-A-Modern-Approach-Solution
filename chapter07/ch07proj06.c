#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("Size of int: %d\n", (int) sizeof(int));
    printf("Size of short: %d\n", (int)sizeof(short));
    printf("Size of long: %d\n", (int)sizeof(long));
    printf("Size of float: %d\n", (int)sizeof(float));
    printf("Size of double: %d\n", (int)sizeof(double));
    printf("Size of long double: %d\n", (int)sizeof(long double));
    printf("\n");
    return 0;
}


//run:
//make ch07proj06
//./ch07proj06
