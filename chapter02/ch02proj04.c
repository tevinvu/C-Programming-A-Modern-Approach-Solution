#include <stdio.h>

int main(void)
{
    float money;
    printf("Enter an amount: ");
    scanf(" %f", &money);
    printf("With tax added: %.2f", money + money * 0.05);
    printf("\n");
    return 0;
}


//run:
//make ch01proj04
//./ch01proj04