#include <stdio.h>

int main(){
    int n,somme;

    printf("entrez le nombre: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        somme += i;
    }
    printf("la somme des nombres de 1 a %d est: %d", n,somme);

    return 0;
}