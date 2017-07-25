#include <stdio.h>

int main(void)
{
    int prefix, identi, publisher, item, checkDi;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identi, &publisher, &item, &checkDi);
    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", identi);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n", checkDi);
    printf("\n");
    return 0;
}
 

//run:
//make ch02proj03
//./ch02proj03
