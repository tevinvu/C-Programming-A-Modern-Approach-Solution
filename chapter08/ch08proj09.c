#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
       int i, j,a = 0, b = 0, num, row = 0, col = 0, letterBlock = 0, ROW = 10, COL = 10;
       
        char walk[10][10];
        for(i = 0; i < ROW; ++i)
        {
            for(j = 0; j < COL; ++j)
            {
                walk[i][j] = '.';
            }
        }
            
            
        char letter[26] = {
                'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                'W', 'X', 'Y', 'Z'};

        
        srand((unsigned) time(NULL));
        row = rand() % ROW;
        col = rand() % COL;
        walk[row][col] = 'A';
        for(i = 1; i < 26; ++i)
        {
            num = (rand() % ROW) % 4;
            switch(num)
            {
                case 0: 
                    if(((row - 1) >= 0) && (walk[row - 1][col] == '.'))
                    {
                            walk[--row][col] =  letter[i];
                            break;
                    }
                    else
                    {
                        letterBlock++;
                    }

                    if(((row + 1) <= 9) && (walk[row + 1][col] == '.'))
                    {
                        walk[++row][col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    if(((col - 1) >= 0) && (walk[row][col - 1] == '.' ))
                    {
                        walk[row][--col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    if((col + 1 <= 9) && (walk[row][col + 1] == '.'))
                    {
                        walk[row][++col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    break;
                    
                case 1: 
                    if(((row + 1) <= 9) && (walk[row + 1][col] == '.'))
                    {
                        walk[++row][col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    if(((row - 1) >= 0) && (walk[row - 1][col] == '.'))
                    {
                            walk[--row][col] =  letter[i];
                            break;
                    }
                    else
                    {
                        letterBlock++;
                    }

                    
                    if(((col - 1) >= 0) && (walk[row][col - 1] == '.' ))
                    {
                        walk[row][--col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    if((col + 1 <= 9) && (walk[row][col + 1] == '.'))
                    {
                        walk[row][++col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    break;
                case 2: 
                    if(((col - 1) >= 0) && (walk[row][col - 1] == '.' ))
                    {
                        walk[row][--col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    if((col + 1 <= 9) && (walk[row][col + 1] == '.'))
                    {
                        walk[row][++col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    if(((row + 1) <= 9) && (walk[row + 1][col] == '.'))
                    {
                        walk[++row][col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    if(((row - 1) >= 0) && (walk[row - 1][col] == '.'))
                    {
                            walk[--row][col] =  letter[i];
                            break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    
                    
                    break;
                case 3: 
                    if((col + 1 <= 9) &&(walk[row][col + 1] == '.'))
                    {
                        walk[row][++col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }

                    if(((col - 1) >= 0) && (walk[row][col - 1] == '.' ))
                    {
                        walk[row][--col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }

                    if(((row + 1) <= 9) && (walk[row + 1][col] == '.'))
                    {
                        walk[++row][col] = letter[i];
                        break;
                    }
                    else
                    {
                        letterBlock++;
                    }

                    if(((row - 1) >= 0) && (walk[row - 1][col] == '.'))
                    {
                            walk[--row][col] =  letter[i];
                            break;
                    }
                    else
                    {
                        letterBlock++;
                    }
                    break;

            }
            if (letterBlock == 4)
            {
                
                break;
            } 
          
            letterBlock = 0;
        }
        
        for(i = 0; i < ROW; ++i)
        {
            for(j = 0; j < COL; ++j)
            {
                printf("%c ", walk[i][j]);
            }
            printf("\n");
        }

        printf("\n");
        return 0;
}

// run: make ch08proj09
//      ./ch08proj09

