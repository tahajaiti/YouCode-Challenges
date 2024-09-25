#include <stdio.h>
#include <math.h>


double surfacecalcule (double longueur, double largeur){
    return longueur * largeur;
}

int main(){

    double longueur, largeur;

    printf("\nEntrez longueur de rectangle : ");
    scanf("%lf", &longueur);

    printf("\nEntrez largeur de rectangle : ");
    scanf("%lf", &largeur);

    double surface = surfacecalcule(longueur, largeur);

    printf("\nla surface de rectangle est : %.2lf", surface);

    return 0;
}