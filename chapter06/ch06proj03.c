#include <stdio.h>

int main(void)
{
    int n, m , remainder;
    printf("Enter a fraction: ");
    scanf(" %d/%d", &n, &m);
    int a = n;
    int b = m;
    while(n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
   
    printf("In lowest terms: %d/%d\n", a/m, b/m);


    printf("\n");
    return 0;
}

//run:
//  make ch06proj03
 //   ./ch06proj03