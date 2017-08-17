#include <stdio.h>


int main(void)
{
       int i, j, num, row = 0, col = 0, max, min;
       int arr[5][5];
       for(i = 1; i < 6; ++i)
       {
            printf("Enter student's grade number %d: ", i);
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
       
       for(i = 0; i < 5; ++i)
       {
           printf("Total Score for student %d: ", i + 1);
           for(j = 0; j < 5; ++j)
                row += arr[i][j];
        
           printf("%d ", row);
           printf("\nAverage score for student %d: %f \n", i + 1, (double)row/5);
           row = 0;
           
       }
       printf("\n");
       
       for(i = 0; i < 5; ++i)
       {    
           max = arr[0][i];
           min = arr[0][i];

           for(j = 0; j < 5; ++j)
           {
                col += arr[j][i];
                if (max < arr[j][i])
                    max = arr[j][i];
                if (arr[j][i] < min)
                    min = arr[j][i];
           }
           printf("Average score for quiz %d: %.2f ",i + 1, (double)col/5 );
           printf("\nMax score for quiz %d: %d", i + 1, max);
           printf("\nMin score for quiz %d: %d", i + 1, min);
           col = 0;
           printf("\n");
       }
        printf("\n");
        return 0;
}

// run: make ch08proj08
//      ./ch08proj08

