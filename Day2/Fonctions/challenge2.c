#include <stdio.h>

double produit (double a, double b){
    return a*b;
}


int main (){
    double a,b;

    printf("entrer le premier nombre: ");
    scanf("%lf", &a);

    printf("entrer le deuxieme nombre: ");
    scanf("%lf", &b);

    double result = produit(a,b);

    printf("le produit est %.4lf", result);//show

    return 0;
}