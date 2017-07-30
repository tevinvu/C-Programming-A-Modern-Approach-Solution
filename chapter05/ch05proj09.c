#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int aM, aD, aY, bM, bD, bY, c = 0;
    printf("Enter first date (mm/dd/yy): ");
    scanf(" %d/%d/%d", &aM, &aD, &aY);
    printf("Enter second date (mm/dd/yy): ");
    scanf(" %d/%d/%d", &bM, &bD, &bY);

    if( aY < bY)
        c = 0;
    else if(aY > bY)
        c = 1;
    else 
        {
            if (aM < bM)
                c = 0;
            else if(aM > bM)
                c = 1;
            else
            {
                if (aD < bD)
                    c = 0;
                else if(aD > bD)
                    c = 1;
                else 
                    c = 2;
            }
        }
        if (c == 0)
            printf("%d/%d/%d is earlier than %d/%d/%d\n", aM, aD, aY, bM, bD, bY);
        else if(c == 1)
            printf("%d/%d/%d is earlier than %d/%d/%d\n",  bM, bD, bY, aM, aD, aY);
        else 
            printf("%d/%d/%d is equal to %d/%d/%d\n",  bM, bD, bY, aM, aD, aY);


    printf("\n");
    return 0;
}


//run:
//make ch05proj09
//./ch05proj09