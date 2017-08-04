#include <stdio.h>

int main(void)
{
   int aM, aD, aY, bM, bD, bY, c = 0;
    printf("Enter a date (mm/dd/yy): ");
    scanf(" %d/%d/%d", &aM, &aD, &aY);
    //prevent enter the empty day
    if(aM == 0 && aD == 0 && aY == 0)
    {
        printf("Enter the right date");
        return 0;
    }
    printf("Enter a date (mm/dd/yy): ");
    scanf(" %d/%d/%d", &bM, &bD, &bY);

    while(bM != 0 && bD != 0 && bY != 0)
    {
       
        if( aY < bY)
            c = 0;
        else if(aY > bY)
            c = 1;
        else 
            {
                if (aM < bM)
                    c = 0;
                else if(aM > bM)
                    c = 1;
                else
                {
                    if (aD < bD)
                        c = 0;
                    else if(aD > bD)
                        c = 1;
                    else 
                        c = 2;
                }
            }
         if (c == 1 || c == 2)
         {
             aM = bM;
             aD = bD;
             aY = bY;
         }
         printf("Enter a date (mm/dd/yy): ");
         scanf(" %d/%d/%d", &bM, &bD, &bY);
    }
    

    
      
            printf("%d/%d/%d is earliest date \n", aM, aD, aY);
      


    printf("\n");
    return 0;
}


//run:
//make ch06proj10
//./ch06proj10
