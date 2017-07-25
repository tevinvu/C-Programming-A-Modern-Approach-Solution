#include <stdio.h>

int main(void)
{
   int num1, num2, num3, num4, num5, num6, num7, num8;
   int num9, num10, num11, num12, num13, num14, num15, num16;
   printf("Enter the number from 1 to 16 in any order: ");
   scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
   printf("%d %d %d %d\n", num1, num2, num3, num4);
   printf("%d %d %d %d\n", num5, num6, num7, num8);
   printf("%d %d %d %d\n", num9, num10, num11, num12);
   printf("%d %d %d %d\n", num13, num14, num15, num16);

   printf("Row sums: %d\n", num1 + num2 + num3 + num4);
   printf("Column sums: %d\n", num5 + num6 + num7 + num8);
   printf("Diagonal sums: %d %d\n", num1 + num6 + num11 + num16, num4 + num7 + num10 + num13);

    printf("\n");
    return 0;
}
 

//run:
//make ch03proj05
//./ch03proj05
