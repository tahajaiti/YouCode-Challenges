#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;

    printf("\nEntrez un nombre: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("\nErreur : entrez un nombre valide.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Le factoriel de %d est : %llu\n", num, fact);
    }

    return 0;
}