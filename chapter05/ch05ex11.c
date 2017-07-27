#include <stdio.h>

int main(void)
{
    int areaCode;
    printf("Enter the area code: ");
    scanf(" %d", &areaCode);
    printf("Area code you entered: ");
    switch(areaCode)
    {
        case 229: printf("Albany\n"); break;
        case 404: printf("Atlanta\n"); break;
        case 470: printf("Atlanta\n"); break;
        case 478: printf("Macon\n"); break;
        case 678: printf("Atlanta\n"); break;
        case 706: printf("Columbus\n"); break;
        case 762: printf("Columbus\n"); break;
        case 770: printf("Atlanta\n"); break;
        case 912: printf("Savannah"); break;
        default: printf("Area code not recogninzed"); break;

    }
    printf("\n");
    return 0;
}



//run:
//make ch05ex11
//./ch05ex11