#include <stdio.h>

int main(void)
{
    int n, m, remainder;
    printf("Enter two integer: ");
    scanf(" %d %d", &n, &m);
    while(n != 0)
    {
        remainder = m % n;
        printf("%d ", remainder);
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);

    printf("\n");
    return 0;
}

//run:
//  make ch06proj02
 //   ./ch06proj02
