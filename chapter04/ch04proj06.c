#include <stdio.h>

int main(void)
{
    int d1, d2, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    int total, first_sum, second_sum;
    printf("Enter the first 12 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
    first_sum = d2 + i2 + i4 + j1 + j3 + j5;
    second_sum = d1 + i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum +second_sum;
    printf("Check digit: %d", 9-((total -1) % 10));
    printf("\n");
    return 0;
}


//run:
//make ch04proj06
//./ch04proj06
