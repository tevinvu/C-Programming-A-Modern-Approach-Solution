#include <stdio.h>

int main(void)
{
    int d, n;
    printf("Enter the number to check prime: ");
    scanf(" %d", &n);

    for (d = 2; d < n; d++)
        if(n % d == 0)
            break;
        if(d * d <= n)
            printf("%d is divisible by %d\n", n, d);
        else
        {
            printf("%d is a prime number\n", n);
        }
    
    
    

    printf("\n");
    return 0;
}

//run:
//  make ch06ex12
 //   ./ch06ex12