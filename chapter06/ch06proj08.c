#include <stdio.h>

int main(void)
{
    int i, j, days, start;
    printf("Enter number of days in month: ");
    scanf(" %d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf(" %d", &start);
    for(j = 1; j < start; ++j) 
        printf("   "); 
    for(i = 1; i <= days; ++i)
    {
        printf("%3d", i);
        if(((i + start)- 1) % 7 == 0)
            printf("\n"); 
    }
    printf("\n");
    return 0;
}


//run:
//make ch06proj08
//./ch06proj08