#include <stdio.h>
#include <math.h>

#define PI 3.14159

double Volumecalcule (double r){
    return pow(r,3) * PI * 4/3;
}

int main(){

    double rayon;

    printf("\nEntrez le rayon du sphere: ");
    scanf("%lf", &rayon);

    double volume = Volumecalcule(rayon);

    printf("\nle volume d'une sphère est : %.2lf", volume);

    return 0;
}