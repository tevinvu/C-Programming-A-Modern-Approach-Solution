#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int digit_seen[10] = {0};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf(" %ld", &n);
    while(n > 0)
    {
        digit = n % 10;
        for(i = 0; i < 10; ++i)
        {
            if (digit == i)
            digit_seen[i] += 1;
        }
        n/= 10;
    }

        printf("Repeated digit: ");
    for(i = 0; i < 10; ++i)
    {
        if(digit_seen[i] > 1)
            {
                printf("%d ", i);
            }
    }
    printf("\n");
    for(i = 0; i < 10; ++i)
    printf("%d ", digit_seen[i]);
    printf("\n");
    return 0;
}

// run: make ch08proj01
//      ./ch08proj01

