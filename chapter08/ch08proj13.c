#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>



int main(void)
{
      char ch1, ch2;
      char lastN[26];
      int i = 0;
      for(i = 0; i < 26; ++i)
        {
            lastN[i] = ' ';
        }
     i = 0;
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
            lastN[i++] = ch2;
        }
    }
            
        

    for(i = 0; i < 26; ++i)
    {
        if(lastN[i] != ' ')
            printf("%c", lastN[i]);
    }
    printf(", %c. ", ch1);
        printf("\n");
        return 0;
}

// run: make ch08proj13
//      ./ch08proj13

