#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
    float num1, num2, total;
    char ch;
    printf("Enter an expression: ");
    scanf("%f", &num1);
    while((ch = getchar()) != '\n')
    {
        scanf("%f", &num2);
        
        switch(ch)
        {
            case '+': 
                total = num1 + num2;
                break;
            case '-': 
                total = num1 - num2;
                break;
            case '*': 
                total = num1 * num2;
                break;
            case '/': 
                total = num1 / num2;
                break;
            default: 
                break;
        }
        num1 = total;

    }

    printf("Value of expression: %.2f\n", total);
    printf("\n");
    return 0;
}


//run:
//  make ch07proj12
//  ./ch07proj12