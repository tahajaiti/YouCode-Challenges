#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Entrez le nombre des elements du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
     
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    printf("Le tableau trie en ordre croissant :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
