#include <stdio.h>
#include <math.h>

double moyennegeo (double a, double b, double c){
    return cbrt(a*b*c);
}

int main(){

    double a,b,c;

    printf("\nEntrez le premier nombre: ");
    scanf("%lf", &a);
    printf("\nEntrez le deuxieme nombre: ");
    scanf("%lf", &b);
    printf("\nEntrez le troisieme nombre: ");
    scanf("%lf", &c);

    double moyenne = moyennegeo(a,b,c);

    printf("\nla moyenne géométrique de trois nombres est : %.2lf", moyenne);

    return 0;
}