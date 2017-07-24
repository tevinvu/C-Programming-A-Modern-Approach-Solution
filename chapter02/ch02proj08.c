#include <stdio.h>

int main(void)
{
    float loan = 0, interest = 0, interest12 = 0, monthly = 0;
    float firstPay, secondPay, thirdPay;
    printf("Enter amount of loan: ");
    scanf( " %f", &loan);
    printf("Enter interest rate: ");
    scanf(" %f", &interest);
    printf("Enter monthly payment: ");
    scanf(" %f", &monthly);

    interest12 = (interest / 100) / 12;
    firstPay = loan + loan * interest12 - monthly;
    secondPay = firstPay + firstPay * interest12 - monthly;
    thirdPay = secondPay + secondPay * interest12 - monthly;

    printf("Balance remaining after first payment: $%.2f \n", firstPay );
    printf("Balance remaining after second payment: $%.2f \n", secondPay );
    printf("Balance remaining after third payment: $%.2f \n", thirdPay );
    printf("\n");
    return 0;
}
 

//run:
//make ch01proj07
//./ch01proj07