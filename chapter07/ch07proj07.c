#include <stdio.h>
#include <ctype.h>
int main(void)
{
   char ch;
   int num1, denom1, num2, denom2, result_num, result_denom;
   printf("Enter two fractions separated by a plus, subtract, multiply,divide sign: ");
   scanf("%d/%d%c%d/%d", &num1, &denom1, &ch, &num2, &denom2);
   switch(ch)
   {
       case '+': 
           result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The sum is %d/%d\n", result_num, result_denom);
            break;
       
       case '-': 
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The subtract is %d/%d\n", result_num, result_denom);
            break;
        case '*': 
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("The multiply is %d/%d\n", result_num, result_denom);
            break;
        case '/': 
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            printf("The divide is %d/%d\n", result_num, result_denom);
            break;
        default: 
            printf("Enter the right + - / *\n");
            break;
   }
   
   
   
    printf("\n");
    return 0;
}


//run:
//make ch07proj07
//./ch07proj07