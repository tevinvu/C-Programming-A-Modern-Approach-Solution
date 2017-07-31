#include <stdio.h>

int main(void)
{
    
    int i = 1;
    while(i <= 128)
    {
        printf("%d ", i);
        i *= 2;
    }
    printf("\n");
    return 0;
}

//run:
//  make ch06ex01
 //   ./ch06ex01