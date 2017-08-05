#include <stdio.h>

int main(void)
{
   double n, sum = 0.0;
   printf("This program sums a series of double values.\n");
   printf("Enter double values (0 to terminate): ");
   scanf("%lf", &n);
   while(n != 0)
   {
       sum += n;
       scanf("%lf", &n);
   }
   printf("THe sum is : %lf\n", sum);
  
    printf("\n");
    return 0;
}


//run:
//make ch07proj03
//./ch07proj03