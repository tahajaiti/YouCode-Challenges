#include <stdio.h>
#include <stdbool.h>

bool compare(double a, double b){
    if (a>b){return 1;}
    if (a<b){return 0;}
}

int main(){

    double a,b;

    printf("entrer le premier nombre: ");
    scanf("%lf", &a);

    printf("entrer le deuxieme nombre: ");
    scanf("%lf", &b);

    int result = compare(a,b);
    
    if (result == 0){printf("le plus petite element est %.2lf", a);}
    if (result == 1){printf("le plus petite element est %.2lf", b);}

    return 0;
}