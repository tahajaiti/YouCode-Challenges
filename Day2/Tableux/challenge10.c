#include <stdio.h>

int main() {
    int n,search;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    printf("\n quel élément voulez-vous rechercher: ");
    scanf("%d", &search);

    if (search > n){
        printf("\n cet élément n'existe pas: ");
        return 1;}
    else
        printf("\n le element est: %d ", num[search-1]);

    return 0;
}
