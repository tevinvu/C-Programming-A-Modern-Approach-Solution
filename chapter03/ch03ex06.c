#include <stdio.h>                      //directives

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter first fractions: ");
    scanf("%d / %d", &num1, &denom1);
    printf("Enter second fractions: ");
    scanf("%d / %d", &num2, &denom2);
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("Teh sum is %d/%d\n", result_num, result_denom);

    
   printf("\n");
   return 0;
   
}


//run: make ch03ex06
//     ./ch03ex06


