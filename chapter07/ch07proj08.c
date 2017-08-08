#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
    char ch;
   int hours, minutes, total;
    printf("Enter a 12-hour time: ");
    scanf(" %d:%d %c", &hours, &minutes, &ch);
    while(ch != '\n')
    {
        if(toupper(ch) == 'A'){
            total = hours * 60 + minutes;
            break;
        }
        else if(toupper(ch) == 'P')
            {
                total = (hours + 12) * 60 + minutes;
                break;
            }
        else 
            break;
    }
    
    int a = 8 * 60 + 0;
    int b = 9 * 60 + 43;
    int c = 11 * 60 + 19;
    int d = 12 * 60 + 47;
    int e = 14 * 60;
    int f = 15 * 60 + 45;
    int g = 19 * 60;
    int h = 21 * 60 + 45;
    int a1 = abs(total - a);
    int b1 = abs(total -b);
    int c1 = abs(total - c);
    int d1 = abs(total - d);
    int e1 = abs(total - e);
    int f1 = abs(total - f);
    int g1 = abs(total - g);
    int h1 = abs(total - h);
    int min = a1;
    if(b1 < min)
        min = b1;
    if(c1 < min)
        min = c1;
    if(d1 < min)
        min = d1;
    if(e1 < min)
        min = e1;
    if(f1 < min)
        min = f1;
    if(g1 < min)
        min = g1;
    if(h1 < min)
        min = h1;
       // printf("%d \n", min);
    if (min == a1)
        printf("Closet department time is 8:00 am , arriving at 10:16 am\n");
    else if(min == b1)
        printf("Closet department time is 9:43 am , arriving at 11:52 am\n");
    else if(min == c1)
        printf("Closet department time is 11:19 am , arriving at 1:31 pm\n");
    else if(min == d1)
    printf("Closet department time is 12:47 pm , arriving at 3:00 pmn");
    else if(min == e1)
    printf("Closet department time is 2:00 pm , arriving at 4:08 pm\n");
    else if(min == f1)
    printf("Closet department time is 3:45 pm , arriving at 5:55 pm\n");
    else if(min == g1)
    printf("Closet department time is 7:00 pm , arriving at 9:20 pm\n");
    else if(min == h1)
    printf("Closet department time is 9:45 pm , arriving at 11:58 pm\n");
    
    printf("\n");
    return 0;
}


//run:
//make ch07proj08
//./ch07proj08
