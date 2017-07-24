#include <stdio.h>

int main(void)
{
    int item, month, day, year;
    float price;
    printf("Enter item number: ");
    scanf(" %d", &item);
    printf("Enter unit price: ");
    scanf(" %f", &price);
   printf("Enter a purchase day (mm/dd/yyyy): ");
   scanf("%d/%d/%d", &month, &day, &year);
   printf("Item\t Unit\t\t Purchase\n");
   printf("\t Price\t\t Date\n");
   printf("%d\t $%6.2f\t %.2d/%.2d/%d\n", item, price, month, day, year);
   

    printf("\n");
    return 0;
}
 

//run:
//make ch03proj02
//./ch03proj02
