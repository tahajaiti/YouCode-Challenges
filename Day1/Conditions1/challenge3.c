#include <stdio.h>

int main(){

    int a,b;

    printf("\nentrez le premier nombre: ");
    scanf("%d", &a);

    printf("\nentrez le deuxieme nombre: ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("\nle triple somme est : %d", a*3);
    }
    else
        printf("\nle somme de %d et %d est : %d", a, b , a+b);

    return 0;
}