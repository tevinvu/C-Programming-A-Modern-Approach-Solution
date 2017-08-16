#include <stdio.h>


int main(void)
{
       int i, j, num, row = 0, col = 0;
       int arr[5][5];
       for(i = 1; i < 6; ++i)
       {
            printf("Enter row %d: ", i);
            for(j = 0; j < 5; ++j)
            {
                scanf(" %d", &num);
                arr[i - 1][j] = num;
            }
       }

       for(i = 0; i < 5; ++i)
       {
           for(j = 0; j < 5; ++j)
                printf(" %d", arr[i][j]);
           printf("\n");
       }
       printf("Row total: ");
       for(i = 0; i < 5; ++i)
       {
           for(j = 0; j < 5; ++j)
                row += arr[i][j];
        
           printf("%d ", row);
           row = 0;
       }
       printf("\n");
       printf("Column total: ");
       for(i = 0; i < 5; ++i)
       {
           for(j = 0; j < 5; ++j)
                col += arr[j][i];
        
           printf("%d ", col);
           col = 0;
       }
        printf("\n");
        return 0;
}

// run: make ch08proj07
//      ./ch08proj07

