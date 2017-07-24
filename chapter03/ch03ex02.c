#include <stdio.h>                      //directives

int main(void)
{
    float x;
    printf("%-8.1e", x);
    printf("%10.6e", x);
    printf("%-8.3f", x);
    printf("%6.0f", x);
    
   printf("\n");
   return 0;
   
}


//run: make ch03ex02
//     ./ch03ex02


