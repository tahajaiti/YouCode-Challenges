#include <stdio.h>

double somme (double a, double b){
    return a+b;
}


int main (){

    double a,b;

    printf("entrer le premier nombre: ");
    scanf("%lf", &a);

    printf("entrer le deuxieme nombre: ");
    scanf("%lf", &b);

    double result = somme(a,b);

    printf("le resultat est %.4lf", result);

    return 0;
}