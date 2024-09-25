#include <stdio.h>


int main(){

    double a;

    printf("Entrez un nombre: ");
    scanf("%lf", &a); 

    if (a > 0)
    {
        printf("le nombre est positive");
    }
    else if (a < 0)
    {
        printf("le nombre est negative");
    }
    else
        printf("le nombre est nul");

    return 0;
}