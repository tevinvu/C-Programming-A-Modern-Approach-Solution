#include <stdio.h>

int main(void)
{ 
    int n, i = 1, num1 = 1, denom1 = 1, num2 = 1, denom2 = 1, top = 1, bottom = 1;
    float final;
   printf("Enter an integer: ");
   scanf(" %d", &n);
   
       while (i <= n)
       {
            num1 = top;
            denom1 = bottom;
            denom2 *= i;
            top = num1 * denom2 + num2 * denom1;
            bottom = denom1 * denom2;
            i++;
       }
       
   
   final = (float)top /(float)bottom;

   printf("Final: %.3f", final);
    printf("\n");

    return 0;
}


//run:
//make ch06proj11
//./ch06proj11