#include <stdio.h>

int main(){

    int n,somme;

    printf("\nentrez un nombre: ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        printf("\n%d x %d = %d", n, i, n*i);
        somme += n*i;
    }

    printf("\nla somme des produits est : %d", somme);

    return 0;
}