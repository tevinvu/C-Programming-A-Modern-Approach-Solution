#include <stdio.h>

int main(void)
{
    int month, day, year;
   printf("Enter a day (mm/dd/yyyy): ");
   scanf("%d/%d/%d", &month, &day, &year);
   printf("You entered the date %d%.2d%.2d\n", year, month, day);

    printf("\n");
    return 0;
}
 

//run:
//make ch03proj01
//./ch03proj01
