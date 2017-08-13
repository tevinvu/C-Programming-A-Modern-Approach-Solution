#include <stdio.h>

int main(void)
{
    int i, j;
    char checker_board[8][8];
     
    for(i = 0; i < 8; ++i)
    {
        for(j = 0; j < 8; ++j)
        {
            if((i + j) % 2 == 0)
                checker_board[i][j] = 'B';
            else
            {
                checker_board[i][j] = 'R';
            }
        }
    }
    for(i = 0; i < 8; ++i)
    {
        for(j = 0; j < 8; ++j)
        {
            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

// run: make ch08ex11
//      ./ch08ex11

