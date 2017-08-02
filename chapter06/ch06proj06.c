#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);
    int i = 2;
    do 
    {
        printf("%d\n", i * i);
        i += 2;
    }while(i * i <= num);
    printf("\n");
    return 0;
}


//run:
//make ch06proj06
//./ch06proj06