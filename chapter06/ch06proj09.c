#include <stdio.h>

int main(void)
{
   float loan = 0, interest = 0, interest12 = 0, monthly = 0;
    float  balance;
    printf("Enter amount of loan: ");
    scanf( " %f", &loan);
    printf("Enter interest rate: ");
    scanf(" %f", &interest);
    printf("Enter the number of payment: ");
    scanf(" %f", &monthly);
    interest12 = (interest / 100) / 12;
    while(monthly > 0)
    {
        
        balance = loan + loan * interest12 - monthly;
        loan = balance;
        
        printf("Balance remaining after this time: $%.2f \n", balance );
        printf("Enter the number of payment: ");
        scanf(" %f", &monthly);
    }
    
    printf("\n");
    return 0;
}


//run:
//make ch06proj09
//./ch06proj09