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
            
            break;
        }
        else if(toupper(ch) == 'P')
            {
                hours = hours + 12;
                break;
            }
        else 
            break;
    }
    printf("Equivalen 24-hours time: %.2d:%.2d", hours, minutes);
   
    printf("\n");
    return 0;
}


//run:
//make ch07proj09
//./ch07proj09
