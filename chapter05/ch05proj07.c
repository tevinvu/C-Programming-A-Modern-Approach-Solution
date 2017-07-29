#include <stdio.h>

int main(void)
{
    int a,b,c,d, max, min;
    printf("Enter four integers: ");
    scanf(" %d %d %d %d", &a, &b, &c, &d);
    max = min = a;
    if (max < b)
    {
        max = b;
        
    }
    else if(b < min)
        min = b;
    
    if (max < c)
    {
        max  = c;

    } 
    else if (c < min)
        min = c;
    if (max < d)
        max = d;
    else if (d < min)
        min = d;
    printf("Max: %d \nMin: %d\n", max, min);
    printf("\n");
    return 0;
}


//run:
//make ch05proj07
//./ch05proj07
