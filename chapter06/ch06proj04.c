#include <stdio.h>

int main(void)
{
    
    float value, commision;
    printf("Enter value of trade: ");
    scanf(" %f", &value);
    
    while(value > 0)
    {
        if(value > 2500.00f)
        commision = 30.00f + .017f * value;
        else if(value < 6250.00f)
        commision = 56.00f + .0066f * value;
        else if(value < 20000.00f)
        commision = 76.00f + .0034f * value;

        else if(value < 50000.00f)
        commision = 100.00f + .0022f * value;
        else
        {
            commision = 255.00f + .0009f * value;     
        }
        if(commision < 39.00f)
        commision = 39.00f;
        printf("commision: $%.2f\n", commision);

        printf("Enter value of trade: ");
        scanf(" %f", &value);
      
    }
     
    
    printf("\n");
    return 0;
}



//run:
//make ch06proj04
//./ch06proj04