#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>



int main(void)
{
      char ch;
    int i, sum  = 0;
   printf("Enter a word: ");
   int letter[26] = {0};

   while((ch = getchar()) != '\n')
   {
       ch = toupper(ch);
       switch(ch)
       {
           case 'A':
                letter[0] += 1;
                break;
           case 'E': 
                letter[4] += 1;
                break;
            case 'I': 
                letter[8] += 1;
                break;
            case 'L': 
                letter[11] += 1;
                break;
            case 'N': 
                letter[13] += 1;
                break;
            case 'O': 
                letter[14] += 1;
                break;
            case 'R': 
                letter[17] += 1;
                break;
            case 'S': 
                letter[18] += 1;
                break;
            case 'T': 
                letter[19] += 1;
                break;
            case 'U': 
                letter[20] += 1;
                break;
            case 'D': 
                letter[3] += 2;
                break;
            case 'G': 
                letter[6] += 2;
                break;
            case 'B': 
                letter[1] += 3;
                break;
            case 'C': 
                letter[2] += 3;
                break;
            case 'M': 
                letter[12] += 3;
                break;
            case 'P': 
                letter[14] += 3;
                break;
            case 'F': 
                letter[5] += 4;
                break;
            case 'H': 
                letter[7] += 4;
                break;
            case 'V': 
                letter[21] += 4;
                break;
            case 'W': 
                letter[22] += 4;
                break;
            case 'Y': 
                letter[24] += 4;
                break;
            case 'K': 
                letter[10] += 5;
                break;
            case 'J': 
                letter[9] += 8;
                break;
            case 'X': 
                letter[23] += 8;
                break;
            case 'Q': 
                letter[16] += 10;
                break;
            case 'Z': 
                letter[25] +=10;
                break;
            default: 
                break;
       }    
   }
   for(i = 0; i < 26; ++i)
    sum += letter[i];
   printf("Scrabble value: %d", sum);
        printf("\n");
        return 0;
}

// run: make ch08proj12
//      ./ch08proj12

