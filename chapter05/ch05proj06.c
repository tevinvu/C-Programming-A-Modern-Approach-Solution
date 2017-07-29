#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, last;
    int total, first_sum, second_sum, check;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
    printf("Enter the last digit: ");
    scanf("%d", &last);
    first_sum = d + i2 +i4 +j1 + j3 +j5;
    second_sum = i1 + i3 +i5 +j2 +j4;
    total = 3 * first_sum +second_sum;
    check = 9-((total -1) % 10);
    if(check == last)
        printf("Valid\n");
    else
    {
        printf("NOT VALID");
    }
    printf("\n");
    return 0;
}


//run:
//make ch04proj06
//./ch04proj06
