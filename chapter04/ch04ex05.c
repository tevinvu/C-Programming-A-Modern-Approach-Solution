#include <stdio.h>

int main(void)
{
    printf(" 8 %% 5 = %d\n", 8%5);
    printf(" -8 %% 5 = %d\n", -8%5);
    printf(" 8 %% -5 = %d\n", 8%-5);
    printf(" -8 %%-5 = %d\n", -8%-5);
    printf("\n");
    return 0;
}


//run:
//make ch04ex05
//./ch04ex05