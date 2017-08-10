#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
//write a program that uses Newton's method to compute the square root of a positive floating-point number'
int main(void)
{
    double x, out = 1;
    double y = 1, yNew;
    
    double avg;
    printf("Enter a positive number: ");
    scanf(" %lf", &x);
    do
    {
        avg = (y + x/y)/2;
        printf("%lf %lf  %lf %lf \n", x, y, x/y, avg);
        
        if(fabs(y - avg) < (.00001 * y))
        {
            out = 0;
        }
        y = avg;
    }while(out != 0);

    printf("Square root: %lf", avg);
    printf("\n");
    return 0;
    
}


//run:
//  make ch07proj14
//  ./ch07proj14