#include <stdio.h>

int main() {
    int n,multi,facteur;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);
    
    printf("\ndonner le facteur: ");
    scanf("%d", &facteur);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    for(int i = 0; i < n; i++) {
        num[i] *= facteur;}

    for(int i = 0; i < n; i++) {
        printf("%d ", num[i]);}

    return 0;
}
