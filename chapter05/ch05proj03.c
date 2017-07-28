#include <stdio.h>

int main(void)
{
    
    float shares, price, value, commision, rival;
    printf("Enter number of shares ");
    scanf(" %f", &shares);
    printf("Enter price per share: ");
    scanf(" %f", &price);
    
    while(value != 0)
    {
        value = shares * price;
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
        //commission by a rival broker
        if(shares < 2000)
            rival = 33.3 * shares;
        else if (shares >= 2000)
            rival = 33.2 * shares;
        printf("Enter number of shares ");
    scanf(" %f", &shares);
    printf("Enter price per share: ");
    scanf(" %f", &price);
    }
     printf("commision: $%.2f\n", commision);
    printf("Rival commision: $%.2f\n", rival);
    printf("\n");
    return 0;
}



//run:
//make ch05proj03
//./ch05proj03