#include <stdio.h>

int main(void)
{
    int i  = 10;
    while(i > 1)
    {
        printf(" %d ",  i++);
      //  printf(": %d", i);
        i /= 2;
    }
    printf("\n");
    return 0;
}

//run:
//  make ch06ex09
 //   ./ch06ex09