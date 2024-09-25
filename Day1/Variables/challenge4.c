#include <stdio.h>

double transforme (double Kmh){

    return Kmh * 0.27778;
}

int main(){

    double kilometres;

    printf("\nEntrez la distance en Kilometres par heur[KM/h]: ");
    scanf("%lf", &kilometres); 

    double conversion = transforme(kilometres);

    printf("\nLa distance de kilometres par hour[KM] en Metres par seconde[m/s] est: %.2lf", conversion);

    return 0;
}