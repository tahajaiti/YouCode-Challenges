#include <stdio.h>

double transforme (double c){

    return c + 273.15;
}

int main(){

    double celsius;

    printf("\nEntrez la température en Celsius[C]: ");
    scanf("%lf", &celsius); 

    double temperature = transforme(celsius);

    printf("\nLa température de Celsius[C] en Kelvin[K] est: %.7lf", temperature);

    return 0;
}