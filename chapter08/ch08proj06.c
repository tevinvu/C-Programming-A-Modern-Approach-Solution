#include <stdio.h>
#include <ctype.h>

int main(void)
{
        char ch, ch1;
        char arr[25];
        int i = 0;
        printf("Enter a message: ");
        
        while((ch = getchar()) != '\n')
        {
            arr[i] = ch;
            i++;
        }

        for(i = 0; i < 25; i++)
        {
            ch1 = toupper(arr[i]);
            if(ch1 == 'A')
                printf("4");
            else if(ch1 == 'B')
                printf("8");
            else if(ch1 == 'E')
                printf("3");
            else if(ch1 == 'I')
                printf("1");
            else if(ch1 == 'O')
                printf("0");
            else if(ch1 == 'S')
                printf("5");
            else 
                printf("%c", ch1);
        }
        printf("!!!!!!!!!!!\n");
        printf("\n");
        return 0;
}

// run: make ch08proj06
//      ./ch08proj06

