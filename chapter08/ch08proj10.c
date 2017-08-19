#include <stdio.h>

#include <stdlib.h>



int main(void)
{
       int hours, minutes, total, i, min, temp, j ;
    printf("Enter a 24-hour time: ");
    scanf(" %d:%d", &hours, &minutes);
    total = hours * 60 + minutes;
    int depart[8];
    int arriv[8];
    depart[0] = 8 * 60 + 0;
    depart[1] = 9 * 60 + 43;
    depart[2] = 11 * 60 + 19;
    depart[3] = 12 * 60 + 47;
    depart[4] = 14 * 60;
    depart[5] = 15 * 60 + 45;
    depart[6] = 19 * 60;
    depart[7] = 21 * 60 + 45;

   min = abs(total - depart[0]);
   j = 0; 
    for(i = 0; i < 8; i++)
    {
        temp = abs(total -depart[i]);
        arriv[i] = temp;
        if(temp < min)
        {
            min = temp;
            j = i;
        }
            
    }
    if (min == arriv[0])
        printf("Closet department time is 8:00 am , arriving at 10:16 am\n");
    else if(min == arriv[1])
        printf("Closet department time is 9:43 am , arriving at 11:52 am\n");
    else if(min == arriv[2])
        printf("Closet department time is 11:19 am , arriving at 1:31 pm\n");
    else if(min == arriv[3])
    printf("Closet department time is 12:47 pm , arriving at 3:00 pm\n");
    else if(min == arriv[4])
    printf("Closet department time is 2:00 pm , arriving at 4:08 pm\n");
    else if(min == arriv[5])
    printf("Closet department time is 3:45 pm , arriving at 5:55 pm\n");
    else if(min == arriv[6])
    printf("Closet department time is 7:00 pm , arriving at 9:20 pm\n");
    else if(min == arriv[7])
    printf("Closet department time is 9:45 pm , arriving at 11:58 pm\n");
    

        printf("\n");
        return 0;
}

// run: make ch08proj10
//      ./ch08proj10

