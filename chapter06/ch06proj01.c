#include <stdio.h>

int main(void)
{
    float num = 0;
    float max = 0;
    printf("Enter  a number: ");
    scanf(" %f", &num);
    while(num > 0)
    {
        if(num > max)
            max = num;
        printf("Enter  a number: ");
        scanf(" %f", &num);
    }
    
    printf("The largest number entered was %f", max);

    printf("\n");
    return 0;
}

//run:
//  make ch06proj01
 //   ./ch06proj01