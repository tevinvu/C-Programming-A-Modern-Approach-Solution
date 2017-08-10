#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 1;
    int arr[40];
    arr[0] = 0;
    arr[1] = 1;
    int k;
    for(k = 2; k < 40; k++)
    {
        arr[k] = arr[k - 1] + arr [k - 2];
    }

    for (k = 0; k < 40; k++)
    {
        printf("%d ", arr[k]);
    }
    
    printf("\n");
    return 0;
}
// run: make ch08ex05
//      ./ch08ex05


//run:
//make ch08ex05
//./ch08ex05