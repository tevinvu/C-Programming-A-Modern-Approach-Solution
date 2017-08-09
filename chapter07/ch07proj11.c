#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
    char ch1, ch2;
    printf("Enter a first and last name: ");
    ch1 = getchar();        //get the first name
    while((ch2 = getchar()) != ' ')
    {
        //do nothing
    }
    
    while((ch2 = getchar()) != '\n')
    {
        if (ch2 == ' ')
        {
            //do nothing
        }
        else
        {
            printf("%c", ch2);
        }
    }
            
        

    
    printf(", %c. ", ch1);
    printf("\n");
    return 0;
}


//run:
//  make ch07proj11
//  ./ch07proj11
