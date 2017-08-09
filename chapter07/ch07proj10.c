#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
    int sum = 0;
    char ch;
    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n')
    {
        switch(ch)
        {
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u': 
                sum += 1;
                break;
            default: 
                sum += 0;
                break;
        }
    }
    printf("Your sentence contains %d vowels", sum);
    printf("\n");
    return 0;
}


//run:
//  make ch07proj10
//  ./ch07proj10