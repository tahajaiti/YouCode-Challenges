#include <stdio.h>

int main() {
    int num, i;
    long long somme = 0;

    printf("\nEntrez un nombre: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("\nErreur : entrez un nombre valide.\n");
    } else {
        for (i = 1; i <= num; i++) {
            somme += i;
        }
        printf("Le somme de %d est : %llu\n", num, somme);
    }

    return 0;
}