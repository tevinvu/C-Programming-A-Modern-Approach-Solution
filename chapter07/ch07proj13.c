#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
//program to calculate the average wod length for a sentence without consider a punctuation mark to be part of the word
int main(void)
{
    char ch;
    float words = 0, count = 0, avg, total = 0;
    
    printf("Enter a sentence: ");
    
    while((ch = getchar()) != '\n')
    {   
        
        if(ch == ' ' || ch == '.')
        {
            total += words;
            count++;
            words = 0;
        }
        else 
        {
            words++;
        }
    }
    avg = total/count;
    //printf(" %f", total);
   // printf(" %f ", count);
    printf("Average word length: %.2f", avg);
    printf("\n");
    return 0;
}


//run:
//  make ch07proj13
//  ./ch07proj13