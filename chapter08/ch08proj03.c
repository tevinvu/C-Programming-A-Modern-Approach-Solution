#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   int digit_seen[10] = {0};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf(" %ld", &n);
    while( n > 0)
    {
        while(n > 0)
        {
            digit = n % 10;
            digit_seen[digit]++;
            n/= 10;
        }

        printf("Digit: \t\t");
        for(i = 0; i < 10; ++i)
            printf("%5d ", i);
            printf("\n");
        printf("Occurrences: \t");
        for(i = 0; i < 10; ++i)
            printf("%5d ",digit_seen[i]);

        printf("\nEnter a number: ");
        scanf(" %ld", &n);
        for(i = 0; i < 10; i++)
            digit_seen[i] = 0;
    }
        printf("\n");
        return 0;
}

// run: make ch08proj03
//      ./ch08proj03

