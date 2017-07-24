#include <stdio.h>                      //directives

int main(void)
{
    int i, j;
    float x;
    printf("Enter 10.3 5 6 ");
    scanf("%d%f%d", &i, &x, &j);
    printf("Here is how scanf read those number: \n");
    printf("%d %f %d", i, x, j);
   printf("\n");
   return 0;
   
}


//run: make ch02ex04
//     ./ch02ex04


