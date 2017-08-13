#include <stdio.h>

int main(void)
{
    float total = 0, avg;
    int row, col;
    const int segments[30][24] ={
        {5, 7, 7, 5,1, 6, 6, 9, 1, 6 ,4},
        {4, 6, 2, 8, 6, 1, 8, 4, 4, 1},
        {4, 2, 1, 6, 4, 2, 7, 8, 8, 1},
        {4, 6, 1, 7, 8, 3, 9, 3, 3, 1},
        {6, 4, 1, 6, 3, 3, 6, 8, 7 , 3},
        {5, 2, 5, 4, 5},
        {4, 2, 1, 6, 3},
        {4, 6, 1, 5, 2}
    };
    for( row = 0; row < 30; row++)
    {
        for (col = 0; col < 24; col++)
            total += segments[row][col];
    }
    avg = total /(30 * 24);
    printf("Print average of a month: %.2f\n", avg);

    printf("\n");
    return 0;
}

// run: make ch08ex09
//      ./ch08ex09
