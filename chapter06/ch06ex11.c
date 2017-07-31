#include <stdio.h>

int main(void)
{
    int sum = 0;
    int i;
    for(i = 0; i < 10; i++)
    {
        if(i % 2)
            continue;
        sum += i;
    }
    printf("%d\n", sum);
    printf("\n");
    return 0;
}

//run:
//  make ch06ex11
 //   ./ch06ex11