#include <stdio.h>

int main() {
    int n,somme;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]);
    somme += num[i]; }

    printf("somme est: %d\n", somme);

    return 0;
}
