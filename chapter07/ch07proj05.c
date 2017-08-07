#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int sum  = 0;
   printf("Enter a word: ");
   

   while((ch = getchar()) != '\n')
   {
       if(toupper(ch) == 'A' || toupper(ch) == 'E' || toupper(ch) == 'I' || toupper(ch) == 'L' || toupper(ch) == 'N')
            sum += 1;
        else if(toupper(ch) == 'O' || toupper(ch) == 'R' || toupper(ch) == 'S' || toupper(ch) == 'T' || toupper(ch) == 'U')
            sum += 1;
        else if(toupper(ch) == 'D' || toupper(ch) == 'G')
            sum += 2;
        else if(toupper(ch) == 'B' || toupper(ch) == 'C' || toupper(ch) == 'M' || toupper(ch) == 'P')
            sum += 3;
        else if(toupper(ch) == 'F' || toupper(ch) == 'H' || toupper(ch) == 'V' || toupper(ch) == 'W' || toupper(ch) == 'Y')
            sum += 4;
        else if(toupper(ch) == 'K')
            sum += 5;
        else if(toupper(ch) == 'J' || toupper(ch) == 'X')
            sum += 8;
        else if(toupper(ch) == 'Q' || toupper(ch) == 'Z')
            sum += 10;
        else
        {
            sum += 0;
        }    
   }
   printf("Scrabble value: %d", sum);
    printf("\n");
    return 0;
}


//run:
//make ch07proj05
//./ch07proj05