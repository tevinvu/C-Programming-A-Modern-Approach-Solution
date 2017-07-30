#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter numerical grade: ");
    scanf(" %d", &num);

    if(num > 100 || num < 0)
    {
        printf("Grade is larger than 100 or less than 0");
        return 0;
    }

    printf("Letter grade: ");
    switch(num / 10)
    {
        case 10:
        case 9: printf("A");    break;
        case 8: printf("B");    break;
        case 7: printf("C");    break;
        case 6: printf("D");    break;
        case 5:
        case 4: 
        case 3: 
        case 2: 
        case 1:
        case 0: printf("F");    break;
    }
    printf("\n");
    return 0;
}


//run:
//make ch05proj10
//./ch05proj10