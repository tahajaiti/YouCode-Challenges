#include <stdio.h>

double transforme (double Km){

    return Km * 1093.61;
}

int main(){

    double kilometres;

    printf("\nEntrez la distance en Kilometres[KM]: ");
    scanf("%lf", &kilometres); 

    double conversion = transforme(kilometres);

    printf("\nLa distance de kilometres[KM] en Yards[Y] est: %.2lf", conversion);

    return 0;
}