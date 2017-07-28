#include <stdio.h>

int main(void)
{
    int share;
    float price, value, commision, rival;
    printf("Enter the number of shares: ");
    scanf(" %d", &share);
    printf("Enter the price per share ");
    scanf(" %f", &price);
    value = share * price;
    
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

    //rival broker share part
    if(share < 2000 && share > 0)
    {
        rival = 33.3 * share;
    }
    else
    {
        rival = 33.2 * share;
    }
    printf("commision charge by rival broker: %.2f", rival);
    printf("\n");
    return 0;
}



//run:
//make ch05proj04
//./ch05proj04
