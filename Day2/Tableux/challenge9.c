#include <stdio.h>

int main() {
    int n;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    printf("[");

    for(int i = n - 1; i >= 0; i--) {
        printf("%d, ", num[i]);}

    printf("]");

    return 0;
}