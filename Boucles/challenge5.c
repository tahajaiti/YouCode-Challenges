#include <stdio.h>
 
int main()
{
    int base, exponent;
    float power = 1;
 
    printf("\nEntrez la base: ");
    scanf("%d", &base);
    printf("\nEntrez le exponent: ");
    scanf("%d", &exponent);
    int expo = exponent;
 
    while (expo < 0)
    {
        power = power/base;
        expo++;
    }
 
    while(expo>0)
    {
        power = power * base;
        expo--;
    }
    printf("%d ^ %d = %.2f", base, exponent, power);
 
    return 0;
}