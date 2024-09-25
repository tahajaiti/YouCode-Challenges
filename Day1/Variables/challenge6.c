#include <stdio.h>

void calcul (double a, double b){

    printf("\n%.2lf + %.2lf: %.2lf ", a,b,a+b);
    printf("\n%.2lf - %.2lf: %.2lf ", a,b,a-b);
    printf("\n%.2lf / %.2lf: %.2lf ", a,b,a/b);
    printf("\n%.2lf * %.2lf: %.2lf ", a,b,a*b);

}

int main(){

    double a,b;

    printf("\nEntrez le premier nombre: ");
    scanf("%lf", &a); 

    printf("\nEntrez le deuxieme nombre: ");
    scanf("%lf", &b);

    printf("\n%.2lf + %.2lf: %.2lf ", a,b,a+b);
    printf("\n%.2lf - %.2lf: %.2lf ", a,b,a-b);
    printf("\n%.2lf / %.2lf: %.2lf ", a,b,a/b);
    printf("\n%.2lf * %.2lf: %.2lf ", a,b,a*b);

    //calcul(a,b);


    return 0;
}