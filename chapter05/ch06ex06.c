#include <stdio.h>

int main(void)
{
    int i = 1;
    for(i = 1; i <= 128; i *= 2)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

//run:
//  make ch06ex06
 //   ./ch06ex06