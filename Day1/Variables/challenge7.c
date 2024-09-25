#include <stdio.h>

int main(){

    double a,b,c;

    int pond1 = 2;
    int pond2 = 3;
    int pond3 = 5;

    printf("\nEntrez le premier nombre: ");
    scanf("%lf", &a);
    printf("\nEntrez le deuxieme nombre: ");
    scanf("%lf", &b);
    printf("\nEntrez le troisieme nombre: ");
    scanf("%lf", &c);

    double moyenne = (a * pond1) + (b * pond2) + (c * pond3) / (pond1 + pond2 + pond3);
    
    printf("\nla moyenne pondérée de trois nombres est: %.2lf ", moyenne);

}