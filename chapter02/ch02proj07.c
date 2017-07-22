#include <stdio.h>

int main(void)
{
    int money;
    int bill20 = 0, bill10 = 0, bill5 = 0, bill1 = 0;
    
    printf("Enter a dollar amount: ");
    scanf(" %d", &money);
    bill20 = money / 20;
    bill10 = (money - bill20 * 20)/10;
    bill5 = (money - bill20 * 20 - bill10 * 10) / 5;
    bill1 = (money - bill20 * 20 - bill10 * 10 - bill5 * 5);
    printf("$20 bills: %d\n", bill20);
    printf("$10 bills: %d\n", bill10);
    printf("$5 bills: %d\n", bill5);
    printf("$1 bills: %d\n", bill1);
    
    printf("\n");
    return 0;
}


//run:
//make ch01proj07
//./ch01proj07