#include <stdio.h>                      //directives

int main(void)
{
    float i, j;
    int x;
    printf("Enter 12.3 45.6 789: ");
    scanf("%f%d%f", &i, &x, &j);
    printf("Here is how scanf read those number: \n");
    printf("%f %d %f", i, x, j);
   printf("\n");
   return 0;
   
}


//run: make ch03ex05
//     ./ch03ex05


