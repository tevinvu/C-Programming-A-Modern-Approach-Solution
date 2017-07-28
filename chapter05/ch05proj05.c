#include <stdio.h>

int main(void)
{
    float income;
    float total = 0.0;
    printf("Enter the amount of taxable income: ");
    scanf(" %f", &income);
    if(income < 750)
        total = 0.01 * income;
    else if(income <= 2250)
        total = 7.5 + .02 * income;
    else if(income <= 3750)
        total = 37.5 + .03 * income;
    else if (income <= 5250)
        total = 82.5 + .04 * income;
    else if (income <= 7000)
        total = 142.5 + .05 * income;
    else 
        total = 230 + .06 * income;
    printf("Tax due: $ %.2f", total);
    printf("\n");
    return 0;
}


//run:
//make ch05proj05
//./ch05proj05