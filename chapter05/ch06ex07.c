#include <stdio.h>

int main(void)
{
    int i;
    for(i = 9384; i > 0; i = i / 10)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

//run:
//  make ch06ex07
 //   ./ch06ex07